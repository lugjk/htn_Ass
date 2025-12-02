#include "coreiot.h"
#include <time.h>
#include "led_blinky.h"
#include "neo_blinky.h"

WiFiClient espClient;
PubSubClient client(espClient);

// Variables to track scheduled connection times
bool connectionActive = false;
unsigned long connectionStartTime = 0;
const unsigned long CONNECTION_TIMEOUT = 30 * 60 * 1000; // 30 minutes timeout

// Check if current time matches one of the scheduled times (6:30 AM, 11:30 AM, 6:30 PM)
bool isScheduledTime() {
  time_t now = time(nullptr);
  struct tm* timeinfo = localtime(&now);
  
  int hour = timeinfo->tm_hour;
  int minute = timeinfo->tm_min;
  
  // Check if time is 6:30 AM, 11:30 AM, or 6:30 PM (with 5 minute tolerance)
  if ((hour == 6 && minute >= 30 && minute < 35) ||
      (hour == 11 && minute >= 30 && minute < 35) ||
      (hour == 18 && minute >= 30 && minute < 35)) {
    return true;
  }
  return false;
}

// Check if pump is still running (watering_in_progress or similar flag)
bool isPumpRunning() {
  // Check if pump is actively running via global flag from watering task
  return isPumpActive;
}


void reconnect() {
  // Loop until we're reconnected
  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");
    // Attempt to connect (username=token, password=empty)
    //if (client.connect("ESP32Client", coreIOT_Token, NULL)) {
    String clientId = "ESP32Client-";
    clientId += String(random(0xffff), HEX);

    if (client.connect(clientId.c_str())) {
        
      Serial.println("connected to CoreIOT Server!");
      client.subscribe("v1/devices/me/rpc/request/+");
      Serial.println("Subscribed to v1/devices/me/rpc/request/+");

    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      vTaskDelay(pdMS_TO_TICKS(5000));
    }
  }
}


void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Message arrived [");
  Serial.print(topic);
  Serial.println("] ");

  // Allocate a temporary buffer for the message
  char message[length + 1];
  memcpy(message, payload, length);
  message[length] = '\0';
  Serial.print("Payload: ");
  Serial.println(message);

  // Parse JSON
  StaticJsonDocument<256> doc;
  DeserializationError error = deserializeJson(doc, message);

  if (error) {
    Serial.print("deserializeJson() failed: ");
    Serial.println(error.c_str());
    return;
  }

  const char* method = doc["method"];
  if (strcmp(method, "setStateLED") == 0) {
    // Check params type (could be boolean, int, or string according to your RPC)
    // Example: {"method": "setValueLED", "params": "ON"}
    const char* params = doc["params"];

    if (strcmp(params, "ON") == 0) {
      Serial.println("Device turned ON.");
      //TODO

    } else {   
      Serial.println("Device turned OFF.");
      //TODO

    }
  } else {
    Serial.print("Unknown method: ");
    Serial.println(method);
  }
}


void setup_coreiot(){

  //Serial.print("Connecting to WiFi...");
  //WiFi.begin(wifi_ssid, wifi_password);
  //while (WiFi.status() != WL_CONNECTED) {
  
  // while (isWifiConnected == false) {
  //   delay(500);
  //   Serial.print(".");
  // }

  while(1){
    if (xSemaphoreTake(xBinarySemaphoreInternet, portMAX_DELAY)) {
      break;
    }
    delay(500);
    Serial.print(".");
  }


  Serial.println(" Connected!");

  client.setServer(CORE_IOT_SERVER.c_str(), CORE_IOT_PORT.toInt());
  client.setCallback(callback);

}

void coreiot_task(void *pvParameters){

    setup_coreiot();

    while(1){
        // Check if it's time to connect (6:30 AM, 11:30 AM, or 6:30 PM)
        if (!connectionActive && isScheduledTime()) {
            connectionActive = true;
            connectionStartTime = millis();
            Serial.println("Scheduled connection time reached - Starting CoreIOT connection");
        }

        // If connection is active, maintain MQTT connection and send data
        if (connectionActive) {
            if (!client.connected()) {
                reconnect();
            }
            client.loop();

            // Publish telemetry data
            String payload = "{\"temperature\":" + String(glob_temperature) +  ",\"humidity\":" + String(glob_humidity) + "}";
            client.publish("v1/devices/me/telemetry", payload.c_str());
            
            // Check if pump is still running
            // If pump is off OR timeout reached, disconnect
            if (!isPumpRunning() || (millis() - connectionStartTime > CONNECTION_TIMEOUT)) {
                if (!isPumpRunning()) {
                    Serial.println("Pump turned off - Closing CoreIOT connection");
                } else {
                    Serial.println("Connection timeout reached (30 minutes) - Closing CoreIOT connection");
                }
                
                if (client.connected()) {
                    client.disconnect();
                }
                connectionActive = false;
            }
            
            vTaskDelay(pdMS_TO_TICKS(5000));
        } else {
            // Wait and check for next scheduled time
            vTaskDelay(pdMS_TO_TICKS(30000)); // Check every 30 seconds when not active
        }
    }
}