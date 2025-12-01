#include "alarm_system.h"
#include "global.h"
#include <PubSubClient.h>
#include <ArduinoJson.h>
#include <time.h>

extern PubSubClient client;

// Alarm system state
static Alarm alarm_queue[10];
static uint8_t alarm_count = 0;
static unsigned long last_alarm_publish = 0;
static const unsigned long ALARM_PUBLISH_INTERVAL = 5000; // Min 5 sec between alarms

void initAlarmSystem() {
  Serial.println("[ALARM] System initialized");
  alarm_count = 0;
}

String getAlarmTypeString(AlarmType type) {
  switch(type) {
    case ALARM_WIFI_DISCONNECTED: return "WiFi_Disconnected";
    case ALARM_MQTT_DISCONNECTED: return "MQTT_Disconnected";
    case ALARM_COREIOT_UNREACHABLE: return "CoreIOT_Unreachable";
    case ALARM_SENSOR_FAILURE: return "Sensor_Failure";
    case ALARM_PUMP_ERROR: return "Pump_Error";
    case ALARM_DATALOG_FAILURE: return "Datalog_Failure";
    default: return "Unknown_Alarm";
  }
}

// Publish alarm to CoreIOT as event (with retry logic)
void publishAlertToUser(const String& alert_message) {
  if (!client.connected()) {
    Serial.println("[ALARM] ✗ Cannot publish alert - MQTT not connected");
    return;
  }
  
  // Prevent alarm flooding
  unsigned long now = millis();
  if (now - last_alarm_publish < ALARM_PUBLISH_INTERVAL) {
    return;
  }
  last_alarm_publish = now;
  
  // Create alert JSON
  StaticJsonDocument<256> doc;
  doc["alert_type"] = "connection_failure";
  doc["message"] = alert_message;
  doc["timestamp"] = millis();
  doc["severity"] = "high";
  
  String payload;
  serializeJson(doc, payload);
  
  // Publish to user-visible topic (attributes)
  bool published = client.publish("v1/devices/me/attributes", payload.c_str());
  
  if (published) {
    Serial.printf("[ALARM] ✓ Alert published to user: %s\n", alert_message.c_str());
  } else {
    Serial.printf("[ALARM] ✗ Failed to publish alert\n");
  }
}

// Log event to CoreIOT datalog
void logToDatalog(const String& event_type, const String& event_data) {
  if (!client.connected()) {
    Serial.printf("[DATALOG] ✗ Cannot log - MQTT disconnected. Event: %s\n", event_type.c_str());
    triggerAlarm(ALARM_DATALOG_FAILURE, "Failed to log: " + event_type);
    return;
  }
  
  // Create datalog entry
  StaticJsonDocument<512> doc;
  doc["event_type"] = event_type;
  doc["event_data"] = event_data;
  doc["timestamp"] = millis();
  doc["device_time"] = time(nullptr);
  
  String payload;
  serializeJson(doc, payload);
  
  // Publish to telemetry (acts as datalog)
  bool published = client.publish("v1/devices/me/telemetry", payload.c_str());
  
  if (published) {
    Serial.printf("[DATALOG] ✓ Logged: %s\n", event_type.c_str());
  } else {
    Serial.printf("[DATALOG] ✗ Failed to log event\n");
  }
}

// Publish event with error status
void publishEventToCore(const String& event_type, const String& event_data, bool is_error) {
  if (!client.connected()) {
    Serial.printf("[EVENT] ✗ Cannot publish event - MQTT disconnected\n");
    if (is_error) {
      triggerAlarm(ALARM_COREIOT_UNREACHABLE, "Failed to publish: " + event_type);
    }
    return;
  }
  
  // Create event JSON
  StaticJsonDocument<512> doc;
  doc["event_type"] = event_type;
  doc["event_data"] = event_data;
  doc["is_error"] = is_error;
  doc["timestamp"] = millis();
  doc["status"] = is_error ? "error" : "success";
  
  String payload;
  serializeJson(doc, payload);
  
  bool published = client.publish("v1/devices/me/telemetry", payload.c_str());
  
  if (published) {
    Serial.printf("[EVENT] ✓ Published: %s (Error: %d)\n", event_type.c_str(), is_error);
  } else {
    Serial.printf("[EVENT] ✗ Failed to publish event\n");
  }
}

// Trigger alarm and store in queue
void triggerAlarm(AlarmType type, const String& message) {
  if (alarm_count >= 10) {
    // Queue full, remove oldest
    for (int i = 0; i < 9; i++) {
      alarm_queue[i] = alarm_queue[i + 1];
    }
    alarm_count = 9;
  }
  
  Alarm new_alarm;
  new_alarm.type = type;
  new_alarm.message = message;
  new_alarm.timestamp = millis();
  new_alarm.acknowledged = false;
  
  alarm_queue[alarm_count] = new_alarm;
  alarm_count++;
  
  // Print alarm
  Serial.printf("\n╔════════════════════════════════════════════╗\n");
  Serial.printf("║ 🚨 ALARM TRIGGERED: %s\n", getAlarmTypeString(type).c_str());
  Serial.printf("║ Message: %s\n", message.c_str());
  Serial.printf("║ Time: %lu\n", millis());
  Serial.printf("╚════════════════════════════════════════════╝\n\n");
  
  // Attempt to publish alert to user
  publishAlertToUser(getAlarmTypeString(type) + ": " + message);
  
  // Log to datalog
  logToDatalog("alarm_triggered", getAlarmTypeString(type) + " - " + message);
}

// Background task to monitor alarms
void alarmMonitorTask(void *pvParameters) {
  vTaskDelay(pdMS_TO_TICKS(10000)); // Wait 10 sec for system init
  
  while(1) {
    // Display active alarms
    if (alarm_count > 0) {
      Serial.printf("\n[ALARM MONITOR] Active alarms: %d\n", alarm_count);
      for (int i = 0; i < alarm_count; i++) {
        Serial.printf("  [%d] %s - %s\n", i+1, getAlarmTypeString(alarm_queue[i].type).c_str(), 
                      alarm_queue[i].message.c_str());
      }
    }
    
    vTaskDelay(pdMS_TO_TICKS(30000)); // Monitor every 30 seconds
  }
}
