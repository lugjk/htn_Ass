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
        // Check connection status
        bool wifi_connected = (WiFi.status() == WL_CONNECTED);
        bool mqtt_connected = client.connected();
        
        uint32_t color;
        int blink_speed;
        
        // Determine color based on connection status
        if (wifi_connected && mqtt_connected) {
            // ✓ Full success - GREEN
            color = strip.Color(0, 255, 0);
            blink_speed = 1000;  // Slow blink
        } 
        else if (!wifi_connected && !mqtt_connected) {
            // ✗ Full fail - RED
            color = strip.Color(255, 0, 0);
            blink_speed = 400;   // Fast blink
        } 
        else {
            // ~ Partial - YELLOW
            color = strip.Color(255, 255, 0);
            blink_speed = 600;   // Medium blink
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