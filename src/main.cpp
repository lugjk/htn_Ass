#include <Arduino.h>
#include "global.h"
#include "alarm_system.h"

// Include các task

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
#include "diagnostic.h"
void setup()
{
  xBinarySemaphoreInternet = xSemaphoreCreateBinary();
  check_info_File(0);
  
  // Initialize alarm system
  initAlarmSystem();

  // Tạo các Task nền

  xTaskCreate(temp_humi_monitor, "Task TEMP", 2048, NULL, 2, NULL);
  // Task IoT
  xTaskCreate(coreiot_task, "CoreIOT Task", 4096, NULL, 2, NULL);
  measure_and_watering_TASK();
  
  // Run diagnostic task (scheduled checks)
  xTaskCreate(diagnosticTask, "Diagnostic", 4096, NULL, 1, NULL);
  
  // Run alarm monitor task
  xTaskCreate(alarmMonitorTask, "AlarmMonitor", 2048, NULL, 1, NULL);
}

void loop()
{
}