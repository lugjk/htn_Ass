#include <Arduino.h>
#include <WiFi.h>
#include <PubSubClient.h>
#include <time.h>
#include "global.h"
#include "coreiot.h"

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
  bool iot_accessible;
  String wifi_ssid;
  String wifi_ip;
  String mqtt_server;
  int mqtt_port;
  int wifi_signal;
} DiagnosticResult;

DiagnosticResult diagnostic_result;

// Check WiFi connection
bool checkWiFiConnection() {
  Serial.println("\n" COLOR_YELLOW "=== WiFi Diagnostic ===" COLOR_RESET);
  
  if (WiFi.status() == WL_CONNECTED) {
    diagnostic_result.wifi_connected = true;
    diagnostic_result.wifi_ssid = WiFi.SSID();
    diagnostic_result.wifi_ip = WiFi.localIP().toString();
    diagnostic_result.wifi_signal = WiFi.RSSI();
    
    Serial.println(COLOR_GREEN "[] WiFi Connected" COLOR_RESET);
    Serial.printf("    SSID: %s\n", diagnostic_result.wifi_ssid.c_str());
    Serial.printf("    IP Address: %s\n", diagnostic_result.wifi_ip.c_str());
    Serial.printf("    Signal Strength: %d dBm\n", diagnostic_result.wifi_signal);
    Serial.printf("    Gateway: %s\n", WiFi.gatewayIP().toString().c_str());
    Serial.printf("    DNS: %s\n", WiFi.dnsIP().toString().c_str());
    
    return true;
  } else {
    diagnostic_result.wifi_connected = false;
    Serial.println(COLOR_RED "[] WiFi NOT Connected" COLOR_RESET);
    Serial.printf("    WiFi Status: %d\n", WiFi.status());
    // Status codes: 0=IDLE, 1=NO_SSID, 2=SCAN_COMPLETED, 3=CONNECTED, 4=CONNECT_FAILED, 5=CONNECTION_LOST, 6=DISCONNECTED
    return false;
  }
}

// Check MQTT connection
bool checkMQTTConnection() {
  Serial.println("\n" COLOR_YELLOW "=== MQTT Diagnostic ===" COLOR_RESET);
  
  diagnostic_result.mqtt_server = CORE_IOT_SERVER;
  diagnostic_result.mqtt_port = CORE_IOT_PORT.toInt();
  
  if (client.connected()) {
    diagnostic_result.mqtt_connected = true;
    Serial.println(COLOR_GREEN "[] MQTT Connected" COLOR_RESET);
    Serial.printf("    Server: %s:%d\n", diagnostic_result.mqtt_server.c_str(), diagnostic_result.mqtt_port);
    Serial.printf("    Client State: %d (0=connected)\n", client.state());
    return true;
  } else {
    diagnostic_result.mqtt_connected = false;
    Serial.println(COLOR_RED "[] MQTT NOT Connected" COLOR_RESET);
    Serial.printf("    Server: %s:%d\n", diagnostic_result.mqtt_server.c_str(), diagnostic_result.mqtt_port);
    Serial.printf("    Client State: %d\n", client.state());
    
    // State codes: -4=CONNECT_FAILED, -3=CONNECT_TIMEOUT, -2=DISCONNECTED, 
    //             -1=NO_SOCKET, 0=CONNECTED, 1=PROTOCOL_ERROR, 2=AUTH_FAILED, 3=NOT_AUTHORIZED,
    //             4=SERVER_UNAVAILABLE, 5=SERVER_MOVING, 6=DISCONNECTING
    switch(client.state()) {
      case -4: Serial.println("    Reason: Connection Failed"); break;
      case -3: Serial.println("    Reason: Connection Timeout"); break;
      case -2: Serial.println("    Reason: Disconnected"); break;
      case -1: Serial.println("    Reason: No Socket"); break;
      case 1: Serial.println("    Reason: Protocol Error"); break;
      case 2: Serial.println("    Reason: Authentication Failed"); break;
      case 3: Serial.println("    Reason: Not Authorized"); break;
      case 4: Serial.println("    Reason: Server Unavailable"); break;
      default: Serial.printf("    Reason: Unknown (%d)\n", client.state());
    }
    return false;
  }
}

// Check CoreIOT device accessibility (verify connection to server)
bool checkCoreIOTDevice() {
  Serial.println("\n" COLOR_YELLOW "=== CoreIOT Device Diagnostic ===" COLOR_RESET);
  
  if (!diagnostic_result.mqtt_connected) {
    Serial.println(COLOR_RED "[] MQTT Not Connected - Cannot verify CoreIOT device" COLOR_RESET);
    diagnostic_result.iot_accessible = false;
    return false;
  }
  
  // Publish a test telemetry to check if device is reachable
  String testPayload = "{\"diagnostic\":\"test_connection\",\"timestamp\":" + String(millis()) + "}";
  
  Serial.println(COLOR_YELLOW "[~] Attempting to publish test message..." COLOR_RESET);
  bool published = client.publish("v1/devices/me/telemetry", testPayload.c_str());
  
  if (published) {
    diagnostic_result.iot_accessible = true;
    Serial.println(COLOR_GREEN "[] CoreIOT Device Accessible" COLOR_RESET);
    Serial.printf("    Token: %s (first 8 chars: %.8s...)\n", 
                  CORE_IOT_TOKEN.c_str(), CORE_IOT_TOKEN.c_str());
    Serial.printf("    Test Message Published: %s\n", testPayload.c_str());
    return true;
  } else {
    diagnostic_result.iot_accessible = false;
    Serial.println(COLOR_RED "[] CoreIOT Device NOT Accessible" COLOR_RESET);
    Serial.println("    Failed to publish message");
    return false;
  }
}

// Run all diagnostics and return summary
void runFullDiagnostic() {
  Serial.println("\n\n");
  Serial.println("╔════════════════════════════════════════════════════════════╗");
  Serial.println("║       YoloUNO IoT Connection Diagnostic - Starting         ║");
  Serial.println("╚════════════════════════════════════════════════════════════╝");
  Serial.printf("Timestamp: %lu\n\n", millis());
  
  // Run checks
  checkWiFiConnection();
  checkMQTTConnection();
  checkCoreIOTDevice();
  
  // Summary
  Serial.println("\n" COLOR_YELLOW "=== Summary ===" COLOR_RESET);
  Serial.println("┌─────────────────────────────────┐");
  Serial.printf("│ WiFi:     %s\n", diagnostic_result.wifi_connected ? COLOR_GREEN " OK" COLOR_RESET : COLOR_RED " FAIL" COLOR_RESET);
  Serial.printf("│ MQTT:     %s\n", diagnostic_result.mqtt_connected ? COLOR_GREEN " OK" COLOR_RESET : COLOR_RED " FAIL" COLOR_RESET);
  Serial.printf("│ CoreIOT:  %s\n", diagnostic_result.iot_accessible ? COLOR_GREEN " OK" COLOR_RESET : COLOR_RED " FAIL" COLOR_RESET);
  Serial.println("└─────────────────────────────────┘");
  
  if (diagnostic_result.wifi_connected && diagnostic_result.mqtt_connected && diagnostic_result.iot_accessible) {
    Serial.println(COLOR_GREEN "\n All systems OPERATIONAL!" COLOR_RESET);
  } else {
    Serial.println(COLOR_RED "\n Some systems FAILED - Check configurations above" COLOR_RESET);
  }
  
  Serial.println("\n");
}

// Lightweight quick check (for periodic monitoring)
void quickStatusCheck() {
  static unsigned long lastCheck = 0;
  unsigned long currentTime = millis();
  
  if (currentTime - lastCheck < 30000) return; // Check every 30 seconds
  lastCheck = currentTime;
  
  Serial.print("[STATUS] WiFi: ");
  Serial.print(WiFi.status() == WL_CONNECTED ? "" : "");
  Serial.print(" MQTT: ");
  Serial.print(client.connected() ? "" : "");
  Serial.print(" IP: ");
  Serial.println(WiFi.localIP().toString());
}

// Check if current time matches scheduled windows (like CoreIOT scheduler)
bool isScheduledDiagnosticTime() {
  time_t now = time(nullptr);
  struct tm* timeinfo = localtime(&now);
  
  if (timeinfo == nullptr) {
    return false; // Time not synced yet
  }
  
  int current_hour = timeinfo->tm_hour;
  int current_minute = timeinfo->tm_min;
  
  // Check if we're in one of the scheduled windows (±5 min tolerance)
  bool is_scheduled_6am = (current_hour == DIAG_CHECK_HOUR_1 && 
                          current_minute >= DIAG_CHECK_MINUTE - 5 && 
                          current_minute <= DIAG_CHECK_MINUTE + 5);
  
  bool is_scheduled_11am = (current_hour == DIAG_CHECK_HOUR_2 && 
                           current_minute >= DIAG_CHECK_MINUTE - 5 && 
                           current_minute <= DIAG_CHECK_MINUTE + 5);
  
  bool is_scheduled_6pm = (current_hour == DIAG_CHECK_HOUR_3 && 
                          current_minute >= DIAG_CHECK_MINUTE - 5 && 
                          current_minute <= DIAG_CHECK_MINUTE + 5);
  
  return (is_scheduled_6am || is_scheduled_11am || is_scheduled_6pm);
}

// Get diagnostic results as JSON string
String getDiagnosticJSON() {
  StaticJsonDocument<512> doc;
  
  doc["wifi"]["connected"] = diagnostic_result.wifi_connected;
  doc["wifi"]["ssid"] = diagnostic_result.wifi_ssid;
  doc["wifi"]["ip"] = diagnostic_result.wifi_ip;
  doc["wifi"]["signal_dbm"] = diagnostic_result.wifi_signal;
  
  doc["mqtt"]["connected"] = diagnostic_result.mqtt_connected;
  doc["mqtt"]["server"] = diagnostic_result.mqtt_server;
  doc["mqtt"]["port"] = diagnostic_result.mqtt_port;
  
  doc["coreiot"]["accessible"] = diagnostic_result.iot_accessible;
  doc["coreiot"]["timestamp"] = millis();
  
  String output;
  serializeJson(doc, output);
  return output;
}

// Scheduled diagnostic task - runs only at scheduled times
void diagnosticTask(void *pvParameters) {
  ScheduledCheck diag_schedule = {
    .should_check = false,
    .last_check_time = 0,
    .check_interval_ms = 60000  // Check condition every 60 seconds
  };
  
  vTaskDelay(pdMS_TO_TICKS(5000)); // Wait 5 sec for system to stabilize
  
  while(1) {
    unsigned long currentTime = millis();
    
    // Check if it's time to run diagnostic (every 60 seconds)
    if (currentTime - diag_schedule.last_check_time >= diag_schedule.check_interval_ms) {
      diag_schedule.last_check_time = currentTime;
      
      // Check if current time matches scheduled windows
      if (isScheduledDiagnosticTime()) {
        diag_schedule.should_check = true;
      }
    }
    
    // If scheduled time window detected, run full diagnostic
    if (diag_schedule.should_check) {
      Serial.println("\n╔══════════════════════════════════════════╗");
      Serial.println("║  SCHEDULED DIAGNOSTIC CHECK (3 CONN)     ║");
      Serial.println("╚══════════════════════════════════════════╝");
      
      runFullDiagnostic();
      
      // Publish results to CoreIOT if available
      if (diagnostic_result.mqtt_connected) {
        String diagnostic_json = getDiagnosticJSON();
        if (client.publish("v1/devices/me/telemetry", diagnostic_json.c_str())) {
          Serial.println("[] Diagnostic results sent to CoreIOT server");
        }
      }
      
      diag_schedule.should_check = false;
    }
    
    vTaskDelay(pdMS_TO_TICKS(30000)); // Check scheduler every 30 seconds
  }
}
