#include <Arduino.h>
#include "scheduler_task.h"

void setup() {
    Serial.begin(115200);
    delay(1000); // Wait for serial
    
    run_scheduler_and_sleep();
}

void loop() {
    // Nothing ever reach here
}