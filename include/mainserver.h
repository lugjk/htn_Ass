#ifndef MAINSERVER_H
#define MAINSERVER_H

#include <Arduino.h>

// Hàm trả về mã HTML giao diện
String getHTML_MainPage();
String getHTML_SettingsPage();

// Task cũ (sẽ để trống)
void main_server_task(void *pvParameters);

#endif