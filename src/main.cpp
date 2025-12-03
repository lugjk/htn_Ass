#include <Arduino.h>
#include "scheduler_task.h"
#include "led_blinky.h"

void setup() {
    Serial.begin(115200);
    delay(1000); // Wait for serial
  xTaskCreate(led_blinky, "Task LED Blink", 2048, NULL, 2, NULL);
    run_scheduler_and_sleep();
}

void loop() {
    // Nothing ever reach here
}