#ifndef __TASK_HANDLER_H__
#define __TASK_HANDLER_H__

#include <Arduino.h>      // BẮT BUỘC: Để hiểu kiểu dữ liệu String
#include <ArduinoJson.h>
#include "task_check_info.h" 

// Khai báo hàm để main hoặc task khác gọi được
void handleWebSocketMessage(String message);

#endif