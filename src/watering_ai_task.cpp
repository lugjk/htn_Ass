// src/watering_ai_task.cpp

#include "watering_ai_task.h"
#include "global.h"
#include "alarm_system.h"
#include <PubSubClient.h>
#include <ArduinoJson.h>
#include <DHT20.h>

extern PubSubClient client;
extern DHT20 dht;

// Định nghĩa Handle
TaskHandle_t Measure_And_Watering_Handle = NULL;

// --- ĐỌC DỮ LIỆU CẢM BIẾN THỰC TẾ ---
static std::array<float, SENSOR_COUNT> ReadSensorData() {
    float t_air = 25.0f;
    float r_hair = 60.0f;
    bool sensor_error = false;
    
    // Read DHT20
    if (dht.read() == DHT20_OK) {
        t_air = dht.getTemperature();
        r_hair = dht.getHumidity();
        Serial.printf("[SENSOR] ✓ DHT20 Read: T=%.2f°C, RH=%.2f%%\n", t_air, r_hair);
    } else {
        sensor_error = true;
        Serial.println("[SENSOR] ✗ DHT20 Read Failed");
        triggerAlarm(ALARM_SENSOR_FAILURE, "DHT20 sensor read error");
    }
    
    // Read analog soil moisture sensors (0-1023 range, map to 0.0-1.0)
    int raw1 = analogRead(34);  // Soil moisture 1
    int raw2 = analogRead(35);  // Soil moisture 2
    float wc_slab1 = (float)(1023 - raw1) / 1023.0f;  // Inverted (wetter = higher value)
    float wc_slab2 = (float)(1023 - raw2) / 1023.0f;
    
    Serial.printf("[SENSOR] ✓ Soil Moisture: WC1=%.2f, WC2=%.2f (Raw: %d, %d)\n", 
                  wc_slab1, wc_slab2, raw1, raw2);
    
    // Simulated values for other sensors
    float pipe_grow = 22.0f;
    float tot_par = 500.0f;
    float rad_sum = 250.0f;
    float par_out = 100.0f;

    // Log sensor data to CoreIOT
    if (client.connected()) {
        StaticJsonDocument<256> doc;
        doc["temperature"] = t_air;
        doc["humidity"] = r_hair;
        doc["soil_moisture_1"] = wc_slab1;
        doc["soil_moisture_2"] = wc_slab2;
        doc["sensor_error"] = sensor_error;
        
        String payload;
        serializeJson(doc, payload);
        client.publish("v1/devices/me/telemetry", payload.c_str());
    } else {
        triggerAlarm(ALARM_MQTT_DISCONNECTED, "Cannot publish sensor data - MQTT disconnected");
    }

    return {t_air, r_hair, pipe_grow, tot_par, rad_sum, par_out, wc_slab1, wc_slab2}; 
}

// --- ĐIỀU KHIỂN MÁY BƠM THỰC TẾ + LOG SỰ KIỆN ---
static void ControlPump(const float watering_amount) {
    if (watering_amount > 0) {
        Serial.println("╔══════════════════════════════════════════╗");
        Serial.printf("║ 🚰 PUMP START: %.2f Liters\n", watering_amount);
        Serial.println("╚══════════════════════════════════════════╝");
        
        // Set pump active
        isPumpActive = true;
        
        // Log pump event to CoreIOT
        if (client.connected()) {
            StaticJsonDocument<256> doc;
            doc["event"] = "pump_on";
            doc["watering_amount"] = watering_amount;
            doc["timestamp"] = millis();
            doc["status"] = "running";
            
            String payload;
            serializeJson(doc, payload);
            
            if (client.publish("v1/devices/me/telemetry", payload.c_str())) {
                Serial.println("[LOG] ✓ Pump ON event logged to CoreIOT");
            } else {
                Serial.println("[LOG] ✗ Failed to log pump ON event");
                triggerAlarm(ALARM_DATALOG_FAILURE, "Failed to log pump start event");
            }
        } else {
            triggerAlarm(ALARM_MQTT_DISCONNECTED, "Cannot log pump event - MQTT disconnected");
        }
        
        // Simulate pump running
        vTaskDelay(pdMS_TO_TICKS(500));
        
        Serial.println("║ 🛑 PUMP STOP");
        isPumpActive = false;
        
        // Log pump stop
        if (client.connected()) {
            StaticJsonDocument<256> doc;
            doc["event"] = "pump_off";
            doc["watering_amount"] = watering_amount;
            doc["timestamp"] = millis();
            doc["status"] = "stopped";
            
            String payload;
            serializeJson(doc, payload);
            client.publish("v1/devices/me/telemetry", payload.c_str());
        }

    } else {
        Serial.println("[PUMP] No watering needed (Amount <= 0)");
        
        // Still log this decision
        if (client.connected()) {
            StaticJsonDocument<256> doc;
            doc["event"] = "pump_skip";
            doc["reason"] = "amount_zero";
            doc["timestamp"] = millis();
            
            String payload;
            serializeJson(doc, payload);
            client.publish("v1/devices/me/telemetry", payload.c_str());
        }
    }
}

// --- HÀM GIẢ LẬP CHẠY AI (Logic đơn giản dựa trên trung bình 30 phút) ---
static float RunAIPrediction(const std::array<std::array<float, SENSOR_COUNT>, READING_CYCLES>& input_data) {
    float avg_temp = 0;
    float avg_humi = 0;

    for (const auto& reading : input_data) {
        avg_temp += reading[0];
        avg_humi += reading[1];
    }
    avg_temp /= READING_CYCLES;
    avg_humi /= READING_CYCLES;

    Serial.println("[AI] Summarizing 30-minute data...");
    Serial.printf("[AI] Avg Temp: %.2f, Avg Humi: %.2f\n", avg_temp, avg_humi);
    
    // Logic AI giả định: Nếu nóng và khô, tưới nhiều hơn
    float required_watering_amount = 0.2f; 
    if (avg_temp > 28.0f && avg_humi < 70.0f) {
        required_watering_amount = 0.75f;
    }

    Serial.printf("[AI] Prediction result: %.2f Liters of water required.\n", required_watering_amount);
    return required_watering_amount;
}


// --- TASK LOGIC CHÍNH: measure_and_watering với kiểm tra kết nối ---
void measure_and_watering(void *pvParameters) {
    std::array<std::array<float, SENSOR_COUNT>, READING_CYCLES> sensor_data_history;
    unsigned int connection_fail_count = 0;
    
    for (;;) { 
        Serial.println("\n╔══════════════════════════════════════════════════════╗");
        Serial.println("║  START: 30-MINUTE AI WATERING CYCLE WITH CHECKS       ║");
        Serial.println("╚══════════════════════════════════════════════════════╝");
        
        // Check WiFi and CoreIOT connectivity at start
        if (WiFi.status() != WL_CONNECTED) {
            triggerAlarm(ALARM_WIFI_DISCONNECTED, "WiFi not connected at cycle start");
            connection_fail_count++;
        } else if (!client.connected()) {
            triggerAlarm(ALARM_MQTT_DISCONNECTED, "MQTT not connected at cycle start");
            connection_fail_count++;
        } else {
            connection_fail_count = 0;
        }
        
        // If 3 consecutive failures, alert user
        if (connection_fail_count >= 3) {
            triggerAlarm(ALARM_COREIOT_UNREACHABLE, "3 consecutive connection failures!");
        }
        
        // Vòng lặp 6 lần, mỗi lần cách nhau 5 phút
        for (uint8_t i = 0; i < READING_CYCLES; ++i) {
            
            Serial.printf("\n[Cycle %d/%d] Reading sensor data...\n", i + 1, READING_CYCLES);
            
            // Read real sensor data
            sensor_data_history[i] = ReadSensorData();
            
            // Check connection health on each cycle
            if (!client.connected()) {
                Serial.println("[WARNING] MQTT disconnected during reading cycle!");
                triggerAlarm(ALARM_MQTT_DISCONNECTED, "MQTT lost during cycle " + String(i+1));
            }
            
            if (i < READING_CYCLES - 1) {
                Serial.printf("[Wait] Waiting for 5 minutes before next reading...\n");
                // Check connection every 30 seconds during wait
                for (int check = 0; check < 10; check++) {
                    vTaskDelay(pdMS_TO_TICKS(30000));
                    if (!client.connected()) {
                        Serial.println("[WARNING] Connection lost during wait interval!");
                    }
                }
            }
        }
        
        // Before running AI, verify connection one more time
        if (!client.connected()) {
            Serial.println("[ERROR] Cannot run AI - MQTT not connected!");
            logToDatalog("ai_cycle_failed", "MQTT disconnected before AI execution");
            triggerAlarm(ALARM_COREIOT_UNREACHABLE, "MQTT unavailable - skipping this cycle");
            
            // Wait and retry
            vTaskDelay(pdMS_TO_TICKS(5 * 60 * 1000));
            continue;
        }
        
        // Run AI prediction
        float required_watering_amount = RunAIPrediction(sensor_data_history);
        
        // Log AI decision
        logToDatalog("ai_decision", "Watering amount: " + String(required_watering_amount) + "L");
        
        // Control pump based on sensor input
        ControlPump(required_watering_amount);

        Serial.println("\n╔══════════════════════════════════════════════════════╗");
        Serial.println("║  CYCLE COMPLETE - Waiting for next 30-minute block    ║");
        Serial.println("╚══════════════════════════════════════════════════════╝\n");
        
        // Wait 5 minutes for next cycle
        vTaskDelay(pdMS_TO_TICKS(5 * 60 * 1000));
    }
}

// Task Creator
void measure_and_watering_TASK() {
    xTaskCreatePinnedToCore(
        measure_and_watering,         
        "GreenhouseAI",               // Tên Task
        AI_TASK_STACK_SIZE,           
        NULL,                         
        1,                            // Priority
        &Measure_And_Watering_Handle, 
        1                             // Core ID
    );
    Serial.println("[Task] 'GreenhouseAI' Simulation Task created.");
}