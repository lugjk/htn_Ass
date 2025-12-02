#include "led_blinky.h"
#include "global.h"
#include <Arduino.h>

void led_blinky(void *pvParameters){
  // Configure LED pin as output
  pinMode(LED_GPIO, OUTPUT);
  digitalWrite(LED_GPIO, LOW);  // Initially off
  
  Serial.println("[LED] Task started - monitoring pump status");

  while(1) {
    // LED shows pump status
    if (isPumpActive) {
      // Pump ON = LED ON
      digitalWrite(LED_GPIO, HIGH);
      Serial.println("[LED] Pump ON");
    } else {
      // Pump OFF = LED OFF
      digitalWrite(LED_GPIO, LOW);
      Serial.println("[LED] Pump OFF");
    }
    
    vTaskDelay(pdMS_TO_TICKS(500));  // Check every 500ms
  }
}