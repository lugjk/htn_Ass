#include "task_wifi.h"
#include "global.h" 
#include <WiFi.h>

void startAP()
{
    WiFi.mode(WIFI_AP);
    WiFi.softAP(ssid.c_str(), password.c_str());
    Serial.print("AP IP: "); Serial.println(WiFi.softAPIP());
}

void startSTA()
{
    // Ưu tiên lấy từ biến WIFI_SSID nếu wifi_ssid rỗng (để tương thích khi load từ file)
    if (wifi_ssid.isEmpty() && !WIFI_SSID.isEmpty()) {
        wifi_ssid = WIFI_SSID;
        wifi_password = WIFI_PASS;
    }

    if (wifi_ssid.isEmpty()) {
        Serial.println("Wifi SSID empty!");
        return;
    }

    WiFi.mode(WIFI_STA);
    if (wifi_password.isEmpty()) WiFi.begin(wifi_ssid.c_str());
    else WiFi.begin(wifi_ssid.c_str(), wifi_password.c_str());

    int timeout = 0;
    while (WiFi.status() != WL_CONNECTED && timeout < 20) {
        delay(500);
        Serial.print(".");
        timeout++;
    }

    if (WiFi.status() == WL_CONNECTED) {
        isWifiConnected = true;
        
        // Đồng bộ ngược lại biến cũ
        WIFI_SSID = wifi_ssid;
        WIFI_PASS = wifi_password;

        if(xBinarySemaphoreInternet != NULL) xSemaphoreGive(xBinarySemaphoreInternet);
        Serial.println("\nConnected!");
    } else {
        isWifiConnected = false;
        Serial.println("\nFailed!");
        startAP();
    }
}

bool Wifi_reconnect()
{
    if (WiFi.status() == WL_CONNECTED) return true;
    startSTA();
    return false;
}