#include "global.h"

// Biến toàn cục được cập nhật bởi Task DHT20 Monitor
float glob_temperature = 0;
float glob_humidity = 0;

// DHT20 sensor instance
DHT20 dht;

// Biến toàn cục được nạp từ LittleFS (task_check_info.cpp)
String WIFI_SSID;
String WIFI_PASS;
String CORE_IOT_TOKEN;
String CORE_IOT_SERVER;
String CORE_IOT_PORT;

// Biến cấu hình Wifi mới (dùng cho Webserver)
String ssid;          // Tên AP phát ra
String password;      // Pass AP phát ra
String wifi_ssid;     // Tên Wifi cần kết nối
String wifi_password; // Pass Wifi cần kết nối

// Biến trạng thái và Đồng bộ hóa FreeRTOS
boolean isWifiConnected = false;
boolean isPumpActive = false;  // Pump status flag
SemaphoreHandle_t xBinarySemaphoreInternet = xSemaphoreCreateBinary();