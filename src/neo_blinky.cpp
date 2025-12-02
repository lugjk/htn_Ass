#include "neo_blinky.h"
#include "global.h"
#include <WiFi.h>
#include <PubSubClient.h>

extern PubSubClient client;

void neo_blinky(void *pvParameters){
    // Initialize NeoPixel
    Adafruit_NeoPixel strip(LED_COUNT, NEO_PIN, NEO_GRB + NEO_KHZ800);
    strip.begin();
    strip.setBrightness(100);
    strip.clear();
    strip.show();

    while(1) {
        // Check connection status (3 connections)
        bool wifi_ok = (WiFi.status() == WL_CONNECTED);
        bool mqtt_ok = client.connected();
        bool iot_device_ok = true;  
        
        // Count successful connections
        int connected_count = (wifi_ok ? 1 : 0) + (mqtt_ok ? 1 : 0) + (iot_device_ok ? 1 : 0);
        
        uint32_t color;
        int blink_speed;
        
        Serial.printf("[NEO] WiFi:%d MQTT:%d IoTDevice:%d (Total: %d/3)\n", 
                     wifi_ok, mqtt_ok, iot_device_ok, connected_count);
        
        // Determine color based on connection count
        if (wifi_ok && mqtt_ok && iot_device_ok) {
            //  All 3 connected (WiFi + MQTT + IoT Device) - GREEN (slow blink)
            color = strip.Color(0, 255, 0);
            blink_speed = 1000;
            Serial.println("[NEO]  FULL SUCCESS - GREEN (WiFi + MQTT + IoT Device)");
        } 
        else if (!wifi_ok && !mqtt_ok) {
            //  WiFi + MQTT disconnected - RED (fast blink)
            color = strip.Color(255, 0, 0);
            blink_speed = 400;
            Serial.println("[NEO] FULL FAIL - RED (No WiFi/MQTT)");
        } 
        else {
            // ~ Partial connection (WiFi OK but MQTT fail, or vice versa) - YELLOW (medium blink)
            color = strip.Color(255, 255, 0);
            blink_speed = 600;
            Serial.printf("[NEO] PARTIAL - YELLOW (%d/3: WiFi=%d, MQTT=%d)\n", 
                         connected_count, wifi_ok, mqtt_ok);
        }
        
        // Blink pattern
        strip.setPixelColor(0, color);
        strip.show();
        vTaskDelay(pdMS_TO_TICKS(blink_speed / 2));
        
        strip.setPixelColor(0, strip.Color(0, 0, 0));
        strip.show();
        vTaskDelay(pdMS_TO_TICKS(blink_speed / 2));
    }
}