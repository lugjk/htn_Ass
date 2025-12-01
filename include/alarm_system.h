#ifndef ALARM_SYSTEM_H
#define ALARM_SYSTEM_H

#include <Arduino.h>

// Alarm types
enum AlarmType {
  ALARM_WIFI_DISCONNECTED = 1,
  ALARM_MQTT_DISCONNECTED = 2,
  ALARM_COREIOT_UNREACHABLE = 3,
  ALARM_SENSOR_FAILURE = 4,
  ALARM_PUMP_ERROR = 5,
  ALARM_DATALOG_FAILURE = 6
};

// Alarm structure
typedef struct {
  AlarmType type;
  String message;
  unsigned long timestamp;
  bool acknowledged;
} Alarm;

// Alarm functions
void initAlarmSystem();
void triggerAlarm(AlarmType type, const String& message);
void logToDatalog(const String& event_type, const String& event_data);
void publishAlertToUser(const String& alert_message);
void publishEventToCore(const String& event_type, const String& event_data, bool is_error = false);
String getAlarmTypeString(AlarmType type);

// Background tasks
void alarmMonitorTask(void *pvParameters);     // FreeRTOS task to monitor and display alarms
void diagnosticTask(void *pvParameters);       // FreeRTOS task for periodic diagnostics

#endif
