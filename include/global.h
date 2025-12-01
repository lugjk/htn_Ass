#ifndef __GLOBAL_H__
#define __GLOBAL_H__

#include <Arduino.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"

// Biến cảm biến
extern float glob_temperature;
extern float glob_humidity;

// Biến điều khiển LED
extern bool led1_state;
extern bool led2_state;

// --- KHÔI PHỤC CÁC BIẾN CŨ (Để fix lỗi task_check_info, task_core_iot) ---
extern String WIFI_SSID;
extern String WIFI_PASS;
extern String CORE_IOT_TOKEN;
extern String CORE_IOT_SERVER;
extern String CORE_IOT_PORT;
// ------------------------------------------------------------------------

// Biến cấu hình Wifi mới (dùng cho Webserver)
extern String ssid;          // Tên AP phát ra
extern String password;      // Pass AP phát ra
extern String wifi_ssid;     // Tên Wifi cần kết nối
extern String wifi_password; // Pass Wifi cần kết nối

// Trạng thái hệ thống
extern boolean isWifiConnected;
extern boolean isPumpActive;  // Pump status flag
extern SemaphoreHandle_t xBinarySemaphoreInternet;

#endif