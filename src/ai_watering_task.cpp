#include "ai_watering_task.h"
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include "sensor.h"

// --- CONFIGURATION ---
#define TEST_FAST_MODE 1 

#if TEST_FAST_MODE
    #define SAMPLE_INTERVAL_MS 5000 
#else
    #define SAMPLE_INTERVAL_MS 300000 
#endif

#define SAMPLES_NEEDED 6 
#define MAX_BAD_SAMPLES 2 
#define EXPECTED_FEATURES 10

extern "C" {
    #include "ai_watering.h"
}

// ---------------------------------------------------------
// THE WORKER FUNCTION (BLOCKING)
// ---------------------------------------------------------
bool measure_and_watering_BLOCKING() {
    Serial.println("\n[AI WORKER] --- Starting Cycle with SAFETY CHECKS ---");

    // --- 1. MODEL CONSISTENCY CHECK ---
    // Ask the model how many features it wants.
    int32_t model_features = get_num_feature();
    if (model_features != EXPECTED_FEATURES) {
        Serial.println("------------------------------------------------");
        Serial.printf("[🚨 CRITICAL FAULT] Model Mismatch!\n");
        Serial.printf("   - Code generated %d features.\n", EXPECTED_FEATURES);
        Serial.printf("   - Model expects %d features.\n", model_features);
        Serial.println("   - ACTION: Aborting to prevent memory corruption.");
        Serial.println("------------------------------------------------");
        return false;
    }

    // Accumulators
    float sum_PipeGrow = 0, sum_WC_slab1 = 0, sum_WC_slab2 = 0, sum_HumDef = 0, sum_Tair = 0;
    float total_Iglob = 0, total_Tot_PAR = 0, total_RadSum = 0, total_PARout = 0;

    SensorData first_sample; 
    SensorData last_sample;  
    
    int valid_sample_count = 0;
    int bad_sample_count = 0;

    // --- 2. LOOP FOR SAMPLES ---
    for (int i = 0; i < SAMPLES_NEEDED; i++) {
        
        Serial.printf("[AI WORKER] Reading Sample %d/%d...\n", i + 1, SAMPLES_NEEDED);
        SensorData current = get_sensor_reading();

        // --- ERROR CHECK ---
        if (!current.valid) {
            Serial.printf("[AI WORKER] ⚠️ Bad Sample detected at index %d.\n", i);
            bad_sample_count++;
            
            if (bad_sample_count > MAX_BAD_SAMPLES) {
                Serial.println("\n[🚨 CRITICAL] Too many sensor failures! Aborting Cycle.");
                return false; 
            }
        } else {
            // Valid Data Processing
            valid_sample_count++;

            // Snapshots
            if (valid_sample_count == 1) first_sample = current; 
            last_sample = current; 

            // Accumulate
            sum_PipeGrow += current.PipeGrow;
            sum_WC_slab1 += current.WC_slab1;
            sum_WC_slab2 += current.WC_slab2;
            sum_HumDef   += current.HumDef;
            sum_Tair     += current.Tair;

            total_Iglob   += current.Iglob;
            total_Tot_PAR += current.Tot_PAR;
            total_RadSum  += current.RadSum;
            total_PARout  += current.PARout;
        }

        // Wait interval
        if (i < SAMPLES_NEEDED - 1) {
            vTaskDelay(pdMS_TO_TICKS(SAMPLE_INTERVAL_MS));
        }
    }

    if (valid_sample_count < (SAMPLES_NEEDED - MAX_BAD_SAMPLES)) {
        Serial.println("[🚨 CRITICAL] Not enough valid data points.");
        return false;
    }

    Serial.println("[AI WORKER] Data Valid. Calculating Features...");

    // --- 3. FEATURE ENGINEERING ---
    float avg_PipeGrow = sum_PipeGrow / valid_sample_count;
    float avg_WC_slab1 = sum_WC_slab1 / valid_sample_count;
    float avg_WC_slab2 = sum_WC_slab2 / valid_sample_count;
    float avg_HumDef   = sum_HumDef / valid_sample_count;
    float avg_Tair     = sum_Tair / valid_sample_count;

    float trend_WC_slab1 = last_sample.WC_slab1 - first_sample.WC_slab1;
    float heat_load = avg_Tair * total_Iglob;

    // --- 4. PACK DATA ---
    union Entry AI_input[EXPECTED_FEATURES];
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

    // --- 5. PREDICT ---
    float watering_amount = 0.0;
    Serial.println("[AI WORKER] Running Inference Model...");

    // CORRECTED: pred_margin = 0 (Standard Prediction)
    predict(AI_input, 0, &watering_amount);

    Serial.println("------------------------------------------------");
    Serial.printf(">>> 🧠 AI DECISION: Water %.2f Liters <<<\n", watering_amount);
    Serial.println("------------------------------------------------");

    // --- 6. WATERING ---
    if(watering_amount > 0.2) {
        // Call pump
    }
    // Success
    return true; 
}