#ifndef TASK_WEBSERVER_H
#define TASK_WEBSERVER_H

#include <ESPAsyncWebServer.h>
#include <ElegantOTA.h>

// --- THÊM DÒNG NÀY ---
extern AsyncWebSocket ws; 
// ---------------------

// Các hàm prototype cũ của bạn
void connnectWSV(); 
void Webserver_stop();
void Webserver_reconnect();
void Webserver_sendata(String data);

#endif