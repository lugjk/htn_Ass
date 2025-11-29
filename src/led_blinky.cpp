#include "led_blinky.h"
#include <Arduino.h>

void led_blinky(void *pvParameters){
  // 1. Cấu hình chân LED là Output
  pinMode(LED_GPIO, OUTPUT);
  
  // 2. Tắt đèn đi (đảm bảo đèn không bị sáng)
  digitalWrite(LED_GPIO, LOW); 

  // 3. Tự xóa Task này khỏi bộ nhớ (FreeRTOS)
  // Lệnh này sẽ dừng vĩnh viễn task này, giúp tiết kiệm RAM cho hệ thống
  vTaskDelete(NULL); 
}