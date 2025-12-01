#include <Arduino.h>
#include "global.h"

// Include các task
#include "led_blinky.h"
#include "neo_blinky.h"
#include "temp_humi_monitor.h"
#include "mainserver.h" // Vẫn include để không lỗi, nhưng task bên trong rỗng
#include "coreiot.h"
#include "coreiot.h"
// Include helpers
#include "task_check_info.h"
#include "task_wifi.h"
#include "task_webserver.h"
#include "task_core_iot.h"
#include "watering_ai_task.h"
void setup()
{
  xBinarySemaphoreInternet = xSemaphoreCreateBinary();
  check_info_File(0);

  // Tạo các Task nền
  xTaskCreate(led_blinky, "Task LED Blink", 2048, NULL, 2, NULL);
  xTaskCreate(neo_blinky, "Task NEO Blink", 2048, NULL, 2, NULL);
  xTaskCreate(temp_humi_monitor, "Task TEMP", 2048, NULL, 2, NULL);
  // Task IoT
  xTaskCreate(coreiot_task, "CoreIOT Task", 4096, NULL, 2, NULL);
  measure_and_watering_TASK();
}

void loop()
{
}