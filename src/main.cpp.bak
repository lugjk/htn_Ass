#include <Arduino.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include "ai_watering_task.h"

// Task handle for the main scheduler
TaskHandle_t MainSchedulerHandle = NULL;

// This task simulates your main system loop
void main_scheduler_task(void *parameter) {
    for (;;) {
        Serial.println("\n[MAIN] ⏰ It's time to check irrigation...");
        
        // 1. Trigger the AI Process
        // This returns immediately, the AI runs in background
        measure_and_watering_TASK();

        // 2. Wait before next trigger
        // In reality, this might be 30 mins or 1 hour.
        // For testing, we wait 40 seconds so we can see the AI finish its fast 5s cycle.
        Serial.println("[MAIN] Waiting for next scheduled cycle...");
        vTaskDelay(pdMS_TO_TICKS(40000)); 
    }
}

void setup() {
    Serial.begin(115200);
    
    // Initialize Random Seed
    randomSeed(analogRead(0));

    delay(2000); 
    Serial.println("==================================");
    Serial.println("   YOLO UNO AI IRRIGATION TEST    ");
    Serial.println("==================================");

    // Create the Main Scheduler Task
    xTaskCreate(
        main_scheduler_task,
        "MainScheduler",
        4096,
        NULL,
        1,
        &MainSchedulerHandle
    );
}

void loop() {
    // Empty - FreeRTOS handles everything
    vTaskDelete(NULL);
}