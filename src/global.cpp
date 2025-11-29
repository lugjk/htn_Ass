#include "global.h"

// Biến toàn cục được cập nhật bởi Task DHT20 Monitor
float glob_temperature = 0;
float glob_humidity = 0;

// Biến toàn cục được nạp từ LittleFS (task_check_info.cpp)
String WIFI_SSID;
String WIFI_PASS;
String CORE_IOT_TOKEN;
String CORE_IOT_SERVER;
String CORE_IOT_PORT;

// Biến trạng thái và Đồng bộ hóa FreeRTOS
boolean isWifiConnected = false;
SemaphoreHandle_t xBinarySemaphoreInternet = xSemaphoreCreateBinary();