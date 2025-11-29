#ifndef TASK_WIFI_H
#define TASK_WIFI_H

#include <Arduino.h>

void startAP();
void startSTA(); // Hàm này cần được khai báo để task_webserver gọi
bool Wifi_reconnect();

#endif