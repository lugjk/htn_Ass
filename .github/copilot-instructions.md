# Copilot Instructions for Smart Irrigation AI System

## Project Overview

This is an **ESP32-based smart irrigation system** that uses an AI decision-making pipeline to determine watering amounts based on environmental sensors. The system runs on a 3-hour schedule with deep sleep between cycles, and uses a PC-based Python script for test data injection during development.

**Key Architecture:**
- **MCU (ESP32)**: Collects sensor data, runs AI inference, controls irrigation pump
- **Python (send_data.py)**: Test harness running on development PC; feeds simulated CSV data via serial
- **AI Model**: 4-unit regression ensemble (`lib/irrigation_regressor_model/`) compiled from ML tree code
- **Scheduler**: Wakes ESP32 every 3 hours at slots (02:30, 05:30, 08:30...) with NTP time sync

## Data Flow: The Request-Response Pattern

The MCU and PC communicate via **serial (115200 baud)**:

1. **MCU sends**: `REQ_DATA\n` (handshake from `sensor.cpp`)
2. **PC responds**: CSV line `PipeGrow,WC_slab1,...,PARout\n`
3. **MCU parses** and aggregates 6 samples (5-minute intervals in production, 5-second in test)
4. **Feature engineering**: Averages, sums, trends → 10 features for AI input
5. **Predict**: `predict()` runs 4 regression trees in parallel (`tu0`–`tu3`)
6. **Output**: Single watering decision (liters)

**Critical**: The CSV column order in `send_data.py` (EXPECTED_ORDER) MUST match sensor struct parsing in `sensor.cpp`. Both use: `PipeGrow, WC_slab1, WC_slab2, HumDef, Tair, Iglob, Tot_PAR, RadSum, PARout`.

## File Organization & Responsibilities

| Path | Purpose |
|------|---------|
| `src/main.cpp` | Entry point; calls `run_scheduler_and_sleep()` only |
| `src/scheduler_task.cpp` | WiFi, NTP time sync, sleep duration calculation, offline fallback |
| `src/ai_watering_task.cpp` | Core loop: samples sensors, aggregates features, calls `predict()` |
| `src/sensor.cpp` | Serial read + CSV parsing; blocks until data arrives |
| `include/*.h` | Public API and config; no implementations |
| `lib/irrigation_regressor_model/` | Pre-compiled ML model (4 tree units + main predictor) |
| `send_data.py` | Test driver; reads CSV, sends rows on request, displays MCU logs |
| `mcu_simulation_raw_input.csv` | Mock sensor dataset for testing |

## Key Patterns & Design Decisions

### 1. **MOCK_MODE Everywhere**
- `include/config.h`: `#define MOCK_MODE true` (switch for fast test cycles)
- In **test mode**: 5-second intervals, 1-minute sleep between cycles
- In **production**: 5-minute intervals, precise 3-hour schedule with NTP
- **Why**: Enables rapid iteration without waiting 3 hours per cycle

### 2. **Feature Aggregation Strategy**
- **State sensors** (WC, Temp, Humidity): Averaged across 6 samples
- **Energy sensors** (Solar radiation): Summed to capture total insolation
- **Trend features**: First-to-last delta for soil moisture, heat load (Tair × Iglob)
- **Location**: All aggregation in `ai_watering_task.cpp` lines 80–120

### 3. **FreeRTOS Integration**
- Use `vTaskDelay()` instead of `delay()` to avoid watchdog resets during blocking waits
- Serial reads block the task; consider adding timeouts if needed

### 4. **AI Model Interface**
- Single `predict(union Entry* data, int pred_margin, float* result)` function
- Input: 10-element `Entry` union array (floats)
- Output: Single float* result (watering liters)
- Model compiled from C tree files; treat as black box

### 5. **Offline Resilience**
- If NTP sync fails in production: Fall back to 3-hour blind sleep
- AI runs regardless of WiFi status (critical for reliability)
- RTC memory (`boot_count`) survives deep sleep for debugging

## Common Development Workflows

### Run a Development Cycle
1. Set `MOCK_MODE = true` in `include/config.h`
2. Compile: `pio run -e yolo_uno` (PlatformIO)
3. Upload: `pio run -e yolo_uno -t upload`
4. Open serial monitor: `pio device monitor -b 115200`
5. In separate terminal: `python send_data.py` (with `MOCK_MODE=True` in send_data.py)
6. Watch: MCU requests data, Python sends rows, MCU logs progress

### Test Real Sensor Integration
- Modify `sensor.cpp` to read from actual GPIO/ADC instead of serial
- Keep the `SensorData` struct unchanged (contract with AI task)
- Parser expects 9 comma-separated floats in strict order

### Adjust Sleep Schedule
- Edit `get_sleep_seconds_precise()` in `scheduler_task.cpp`
- Base slot: 02:30 AM (150 minutes)
- Interval: 180 minutes (3 hours)
- Returns seconds until next slot; calculate from current time

## Debugging Tips

- **"REQ_DATA not appearing?"**: Check serial baud rate (115200), verify sensor.cpp is called
- **"Malformed CSV"**: CSV order mismatch or extra whitespace; compare EXPECTED_ORDER lists
- **"AI produces zeros?"**: Verify `union Entry` floats are initialized before calling `predict()`
- **"Watchdog reset?"**: Use `vTaskDelay()` not `delay()` in blocking loops
- **"WiFi connects but time doesn't sync?"**: Check NTP server reachability and timezone offset

## External Dependencies

- **PlatformIO** build system (platformio.ini: board=yolo_uno)
- **Arduino**: WiFi.h, time.h (built-in ESP32 libs)
- **FreeRTOS**: vTaskDelay (included in ESP32 core)
- **Python**: pandas, serial (send_data.py test harness)

## Integration Boundaries

- **AI Model ↔ Feature Engine**: Pass 10 floats in fixed order to `predict()`
- **Scheduler ↔ Tasks**: `run_scheduler_and_sleep()` is blocking; no yield after AI completes
- **Serial ↔ Sensor**: CSV parsing expects exact 9 values; malformed input returns zeros
- **WiFi ↔ NTP**: Optional; system functions offline (no schedule precision)
