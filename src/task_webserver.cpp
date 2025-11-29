#include "task_webserver.h"
#include "mainserver.h" // Lấy HTML
#include "task_wifi.h"  // QUAN TRỌNG: Để gọi startSTA()
#include "global.h"
#include <LittleFS.h>

AsyncWebServer server(80);
AsyncWebSocket ws("/ws");

bool webserver_isrunning = false;

// ... (Giữ nguyên các hàm setupRoutes như câu trả lời trước) ...
// Tôi paste lại đoạn setupRoutes để bạn tiện copy:

void setupRoutes() {
    server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
        request->send(200, "text/html", getHTML_MainPage());
    });

    server.on("/settings", HTTP_GET, [](AsyncWebServerRequest *request){
        request->send(200, "text/html", getHTML_SettingsPage());
    });

    server.on("/toggle", HTTP_GET, [](AsyncWebServerRequest *request){
        if (request->hasParam("led")) {
            int id = request->getParam("led")->value().toInt();
            if(id == 1) led1_state = !led1_state;
            if(id == 2) led2_state = !led2_state;
        }
        String json = "{\"led1\":\"" + String(led1_state?"ON":"OFF") + "\", \"led2\":\"" + String(led2_state?"ON":"OFF") + "\"}";
        request->send(200, "application/json", json);
    });

    server.on("/sensors", HTTP_GET, [](AsyncWebServerRequest *request){
        String json = "{\"temp\":" + String(glob_temperature) + ", \"hum\":" + String(glob_humidity) + "}";
        request->send(200, "application/json", json);
    });

    server.on("/connect", HTTP_GET, [](AsyncWebServerRequest *request){
        if (request->hasParam("ssid")) {
            // Cập nhật cả 2 biến để tương thích ngược
            wifi_ssid = request->getParam("ssid")->value();
            WIFI_SSID = wifi_ssid; // Cập nhật cho code cũ

            wifi_password = request->hasParam("pass") ? request->getParam("pass")->value() : "";
            WIFI_PASS = wifi_password; // Cập nhật cho code cũ
            
            request->send(200, "text/plain", "Đã nhận. Đang kết nối Wifi...");
            startSTA(); // Gọi hàm kết nối
        } else {
            request->send(400, "text/plain", "Thiếu SSID!");
        }
    });

    server.on("/script.js", HTTP_GET, [](AsyncWebServerRequest *request){ request->send(LittleFS, "/script.js", "application/javascript"); });
    server.on("/styles.css", HTTP_GET, [](AsyncWebServerRequest *request){ request->send(LittleFS, "/styles.css", "text/css"); });
}

void Webserver_sendata(String data) { if (ws.count() > 0) ws.textAll(data); }
void onEvent(AsyncWebSocket *server, AsyncWebSocketClient *client, AwsEventType type, void *arg, uint8_t *data, size_t len) {}

void connnectWSV()
{
    ws.onEvent(onEvent);
    server.addHandler(&ws);
    setupRoutes();
    server.begin();
    ElegantOTA.begin(&server);
    webserver_isrunning = true;
    Serial.println("AsyncWebServer Started");
}

void Webserver_stop() { ws.closeAll(); server.end(); webserver_isrunning = false; }
void Webserver_reconnect() { if (!webserver_isrunning) connnectWSV(); ElegantOTA.loop(); }