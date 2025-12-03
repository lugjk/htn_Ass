#include <Arduino.h>
#include <WiFi.h>
#include <PubSubClient.h>
#include <time.h>
#include "global.h"
#include "coreiot.h"
#include "neo_blinky.h"

extern PubSubClient client;

// Scheduler configuration for connection checks
#define DIAG_CHECK_HOUR_1 6    // 6:30 AM
#define DIAG_CHECK_HOUR_2 11   // 11:30 AM
#define DIAG_CHECK_HOUR_3 18   // 6:30 PM
#define DIAG_CHECK_MINUTE 30

typedef struct {
  bool should_check;
  unsigned long last_check_time;
  unsigned long check_interval_ms;
} ScheduledCheck;

// Color codes for Serial output
#define COLOR_GREEN "\033[0;32m"
#define COLOR_RED "\033[0;31m"
#define COLOR_YELLOW "\033[1;33m"
#define COLOR_RESET "\033[0m"

typedef struct {
  bool wifi_connected;
  bool mqtt_connected;
  bool devcie_connected=true;
  String wifi_ssid;
  String wifi_ip;
  String mqtt_server;
  int mqtt_port;
  int wifi_signal;
} DiagnosticResult;

DiagnosticResult diagnostic_result;
int wifi_retry_count = 0;
int mqtt_retry_count = 0;
const int MAX_RETRIES = 10;

// Check WiFi connection
bool checkWiFiConnection() {
  Serial.println("\n" COLOR_YELLOW "=== WiFi Diagnostic ===" COLOR_RESET);
  
  if (WiFi.status() == WL_CONNECTED) {
    diagnostic_result.wifi_connected = true;
    diagnostic_result.wifi_ssid = WiFi.SSID();
    diagnostic_result.wifi_ip = WiFi.localIP().toString();
    diagnostic_result.wifi_signal = WiFi.RSSI();
    wifi_retry_count = 0;  // Reset retry count on success
    
    Serial.println(COLOR_GREEN "[] WiFi Connected" COLOR_RESET);
    Serial.printf("    Timestamp: %lu\n", millis());
    return true;
  } else {
    wifi_retry_count++;
    Serial.printf(COLOR_YELLOW "[~] WiFi Connection Attempt %d/%d" COLOR_RESET "\n", wifi_retry_count, MAX_RETRIES);
    Serial.printf("    Timestamp: %lu\n", millis());
    Serial.println(COLOR_YELLOW "[~] Attempting WiFi connection..." COLOR_RESET);
    
    // Try to reconnect
    WiFi.reconnect();
    vTaskDelay(pdMS_TO_TICKS(2000));  // Wait 2 seconds for connection attempt
    
    if (WiFi.status() == WL_CONNECTED) {
      diagnostic_result.wifi_connected = true;
      diagnostic_result.wifi_ssid = WiFi.SSID();
      diagnostic_result.wifi_ip = WiFi.localIP().toString();
      diagnostic_result.wifi_signal = WiFi.RSSI();
      wifi_retry_count = 0;  // Reset retry count on success
      Serial.println(COLOR_GREEN "[] WiFi Connected" COLOR_RESET);
      return true;
    }
    
    if (wifi_retry_count >= MAX_RETRIES) {
      diagnostic_result.wifi_connected = false;
      Serial.println(COLOR_RED "[] WiFi FAILED - Max retries reached" COLOR_RESET);
      return false;
    }
    return false;
  }
}
bool checkMQTTConnection() {
  Serial.println("\n" COLOR_YELLOW "=== MQTT Diagnostic ===" COLOR_RESET);

  // 1. Nếu đã kết nối rồi thì không cần làm gì nữa
  if (client.connected()) {
    diagnostic_result.mqtt_connected = true;
    mqtt_retry_count = 0;
    Serial.println(COLOR_GREEN "[] MQTT already connected to app.coreiot.io" COLOR_RESET);
    return true;
  }

  // 2. Nếu WiFi chưa có thì khỏi thử MQTT luôn
  if (WiFi.status() != WL_CONNECTED) {
    diagnostic_result.mqtt_connected = false;
    Serial.println(COLOR_RED "[] MQTT check skipped: WiFi NOT connected" COLOR_RESET);
    return false;
  }

  // 3. Đảm bảo đã set server đúng (app.coreiot.io + port)
  client.setServer(CORE_IOT_SERVER.c_str(), CORE_IOT_PORT.toInt());

  // 4. Thử kết nối tối đa MAX_RETRIES lần
  while (!client.connected() && mqtt_retry_count < MAX_RETRIES) {
    mqtt_retry_count++;

    Serial.printf(COLOR_YELLOW "[~] MQTT Connection Attempt %d/%d" COLOR_RESET "\n",
                  mqtt_retry_count, MAX_RETRIES);
    Serial.printf("    Timestamp: %lu\n", millis());

    // Tạo clientId random
    String clientId = "ESP32Diag-";
    clientId += String(random(0xffff), HEX);

    // Dùng CORE_IOT_TOKEN làm username, password = NULL
    if (client.connect(clientId.c_str(), CORE_IOT_TOKEN.c_str(), NULL)) {
      Serial.println(COLOR_GREEN "[] MQTT Connected to app.coreiot.io" COLOR_RESET);
      
      // Subscribe topic RPC nếu cần (giống coreiot.cpp)
      client.subscribe("v1/devices/me/rpc/request/+");
      
      diagnostic_result.mqtt_connected = true;
      mqtt_retry_count = 0;  // Reset lại bộ đếm
      return true;
    } else {
      Serial.printf(COLOR_YELLOW "[~] MQTT failed, rc=%d. Retrying..." COLOR_RESET "\n",
                    client.state());
      vTaskDelay(pdMS_TO_TICKS(2000));  // Đợi 2 giây rồi thử lại
    }
  }

  diagnostic_result.mqtt_connected = false;
  Serial.println(COLOR_RED "[] MQTT FAILED - Max retries reached" COLOR_RESET);
  return false;
} 
bool checkdeviceConnection() {
  return 1;//simulator
  }
int CheckAllconnection(){
  diagnostic_result.mqtt_connected = checkMQTTConnection();
  diagnostic_result.wifi_connected = checkWiFiConnection();
  isWifiConnected=diagnostic_result.wifi_connected;
  diagnostic_result.devcie_connected=checkdeviceConnection();
  if( diagnostic_result.mqtt_connected==1 && diagnostic_result.devcie_connected==1)
    {Serial.println(COLOR_GREEN "All connect done!" COLOR_RESET);
      return  1;
}else{
  if (diagnostic_result.wifi_connected==0 && diagnostic_result.devcie_connected==0)
  {
    Serial.println(COLOR_RED "Some connection failed!" COLOR_RESET);
    return 2;
  }
  else{
    Serial.println(COLOR_YELLOW "Some connection failed!" COLOR_RESET);
     return 3;

}

}}