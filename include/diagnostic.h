#ifndef DIAGNOSTIC_H
#define DIAGNOSTIC_H

#include <Arduino.h>

// Scheduled check configuration (same as CoreIOT scheduler)
// Runs diagnostic at: 6:30 AM, 11:30 AM, 6:30 PM (±5 min tolerance)

// Main diagnostic functions
void runFullDiagnostic();              // Run complete WiFi + MQTT + CoreIOT check
void quickStatusCheck();               // Lightweight periodic status check
String getDiagnosticJSON();            // Get results as JSON for sending to server
bool isScheduledDiagnosticTime();      // Check if current time is in scheduled window

// Individual check functions
bool checkWiFiConnection();            // Check WiFi status
bool checkMQTTConnection();            // Check MQTT broker connection
bool checkCoreIOTDevice();             // Check CoreIOT device accessibility

// Background task
void diagnosticTask(void *pvParameters); // FreeRTOS task - runs diagnostic only at scheduled times
                                         // Syncs with CoreIOT scheduler: 6:30, 11:30, 18:30

// From alarm_system.cpp
void alarmMonitorTask(void *pvParameters); // FreeRTOS task to monitor and display alarms

#endif
