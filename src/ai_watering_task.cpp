#include "ai_watering_task.h"
#include "sensor.h"
#include "config.h"
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <vector>

// --- CONFIGURATION ---
// Set to 1 to run fast (5 sec intervals) for testing
// Set to 0 for real deployment (5 min intervals)
#ifndef MOCK_MODE
    #define MOCK_MODE false
#endif

#if MOCK_MODE
    #define SAMPLE_INTERVAL_MS 5000 // 5 seconds
#else
    #define SAMPLE_INTERVAL_MS 300000 // 5 minutes
#endif

#define SAMPLES_NEEDED 6 

// --- AI MODEL INCLUDE ---
extern "C" {
    #include "ai_watering.h"
}

// ---------------------------------------------------------
// THE WORKER FUNCTION (BLOCKING)
// ---------------------------------------------------------
void measure_and_watering_BLOCKING() {
    Serial.println("\n[AI WORKER] --- Starting Data Collection Cycle (BLOCKING) ---");
    #if MOCK_MODE
    Serial.println("[AI WORKER] ⚠️ TEST MODE ACTIVE: 5 Second Intervals ⚠️");
    #endif

    // Accumulators
    float sum_PipeGrow = 0, sum_WC_slab1 = 0, sum_WC_slab2 = 0, sum_HumDef = 0, sum_Tair = 0;
    float total_Iglob = 0, total_Tot_PAR = 0, total_RadSum = 0, total_PARout = 0;

    SensorData first_sample; 
    SensorData last_sample;  

    // --- LOOP FOR SAMPLES ---
    for (int i = 0; i < SAMPLES_NEEDED; i++) {
        
        SensorData current = read_sensors_now();
        Serial.printf("[AI WORKER] Sample %d/%d | Tair: %.1f | WC: %.1f | Sun: %.0f\n", 
                      i + 1, SAMPLES_NEEDED, current.Tair, current.WC_slab1, current.Iglob);

        // 1. Capture snapshots for Trend
        if (i == 0) first_sample = current; 
        if (i == SAMPLES_NEEDED - 1) last_sample = current; 

        // 2. Accumulate
        sum_PipeGrow += current.PipeGrow;
        sum_WC_slab1 += current.WC_slab1;
        sum_WC_slab2 += current.WC_slab2;
        sum_HumDef   += current.HumDef;
        sum_Tair     += current.Tair;

        total_Iglob   += current.Iglob;
        total_Tot_PAR += current.Tot_PAR;
        total_RadSum  += current.RadSum;
        total_PARout  += current.PARout;

        // Wait interval, BUT NOT after the last sample
        if (i < SAMPLES_NEEDED - 1) {
            vTaskDelay(pdMS_TO_TICKS(SAMPLE_INTERVAL_MS)); // vTaskDelay is safer for FreeRTOS Watchdogs.
        }
    }

    Serial.println("[AI WORKER] Data Collection Complete. Calculating Features...");

    // --- FEATURE ENGINEERING ---
    float avg_PipeGrow = sum_PipeGrow / SAMPLES_NEEDED;
    float avg_WC_slab1 = sum_WC_slab1 / SAMPLES_NEEDED;
    float avg_WC_slab2 = sum_WC_slab2 / SAMPLES_NEEDED;
    float avg_HumDef   = sum_HumDef / SAMPLES_NEEDED;
    float avg_Tair     = sum_Tair / SAMPLES_NEEDED;

    float trend_WC_slab1 = last_sample.WC_slab1 - first_sample.WC_slab1;
    float heat_load = avg_Tair * total_Iglob;

    // --- PACK DATA (10 Features) ---
    union Entry AI_input[10];
    AI_input[0].fvalue = avg_PipeGrow;
    AI_input[1].fvalue = avg_WC_slab1;
    AI_input[2].fvalue = avg_WC_slab2;
    AI_input[3].fvalue = avg_HumDef;
    AI_input[4].fvalue = total_Iglob;
    AI_input[5].fvalue = total_Tot_PAR;
    AI_input[6].fvalue = total_RadSum;
    AI_input[7].fvalue = total_PARout;
    AI_input[8].fvalue = trend_WC_slab1;
    AI_input[9].fvalue = heat_load;

    // --- PREDICT ---
    float watering_amount = 0.0;
    Serial.println("[AI WORKER] Running Inference Model...");

    // Call AI
    predict(AI_input, 10, &watering_amount);

    Serial.println("------------------------------------------------");
    Serial.printf(">>> 🧠 AI DECISION: Water %.2f Liters <<<\n", watering_amount);
    Serial.println("------------------------------------------------");

    // pump_water_blocking(watering_amount);

    Serial.println("[AI WORKER] Cycle finished. Returning to Scheduler.\n");
}