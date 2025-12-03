#include "coreiot.h"

// ----------- Cấu hình (Lấy từ global.h) -----------
// const char* coreIOT_Server = "10.235.76.226";  
// const char* coreIOT_Token = "g7drm1amhd3dchr379xu";   // Device Access Token
const int   mqttPort = 1883; // Port mặc định cho MQTT
// ----------------------------------------

WiFiClient espClient;
PubSubClient client(espClient);


void reconnect() {
  // Task chính (coreiot_task) sẽ gọi hàm này liên tục nếu kết nối bị mất.
  // Hàm này CHỈ THỰC HIỆN KẾT NỐI MỘT LẦN (non-blocking).
  if (!client.connected()) {
    Serial.print("Attempting MQTT connection to ");
    Serial.print(CORE_IOT_SERVER.c_str());
    Serial.print("...");
    
    // Tạo client ID ngẫu nhiên
    String clientId = "ESP32Client-";
    clientId += String(random(0xffff), HEX);

    // THỰC HIỆN KẾT NỐI: Sử dụng CORE_IOT_TOKEN làm username để đăng nhập
    // Cú pháp: client.connect(clientId, username, password)
    if (client.connect(clientId.c_str(), CORE_IOT_TOKEN.c_str(), NULL)) {
        
      Serial.println("connected to CoreIOT Server!");
      client.subscribe("v1/devices/me/rpc/request/+");
      Serial.println("Subscribed to v1/devices/me/rpc/request/+");

    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" will retry in 5 seconds (next loop).");
      // KHÔNG DÙNG delay() ở đây để Task khác có thể chạy.
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
  Serial.println(message);

  // Deserialize JSON document
  StaticJsonDocument<256> doc;
  DeserializationError error = deserializeJson(doc, message);

  if (error) {
    Serial.print(F("deserializeJson() failed: "));
    Serial.println(error.f_str());
    return;
  }

  // Get the RPC method
  const char* method = doc["method"];
  
  if (strcmp(method, "setValueLED") == 0) { 
    // Get the boolean, int, or string according to your RPC
    // Example: {"method": "setValueLED", "params": "ON"}
    const char* params = doc["params"];

    if (strcmp(params, "ON") == 0) {
      Serial.println("Device turned ON.");
      //TODO: Thêm logic điều khiển LED

    } else {   
      Serial.println("Device turned OFF.");
      //TODO: Thêm logic điều khiển LED

    }
  } else {
    Serial.print("Unknown method: ");
    Serial.println(method);
  }
}


void setup_coreiot(){

  // Chờ cho Wifi được kết nối (nhận semaphore từ task_wifi)
  Serial.println("Waiting for Internet connection semaphore...");
  while(1){
    if (xSemaphoreTake(xBinarySemaphoreInternet, portMAX_DELAY)) {
       xSemaphoreGive(xBinarySemaphoreInternet); // Trả lại semaphore cho các task khác
      break;
    }
    delay(500);
    Serial.print(".");
  }

  Serial.println(" Connected!");

  // Cấu hình MQTT client
  client.setServer(CORE_IOT_SERVER.c_str(), CORE_IOT_PORT.toInt());
  client.setCallback(callback);

}

void coreiot_task(void *pvParameters){

    setup_coreiot();

    while(1){
        // CHẾ ĐỘ LUÔN KẾT NỐI: Task này liên tục kiểm tra và gọi reconnect
        if (!client.connected()) {
            reconnect();
        }
        
        // Loop để xử lý các gói tin đến và đi (cần gọi thường xuyên)
        client.loop();

        // Gửi Telemetry (chỉ khi kết nối thành công)
        String payload = "{\"temperature\":" + String(glob_temperature) +  ",\"humidity\":" + String(glob_humidity) + "}";
        
        if (client.connected()) {
             client.publish("v1/devices/me/telemetry", payload.c_str());
             Serial.println("Published payload: " + payload);
        } else {
             Serial.println("MQTT not connected. Skipping telemetry publish.");
        }


        // Dừng Task 5 giây. Điều này xác định tần suất thử lại kết nối và gửi dữ liệu.
        vTaskDelay(5000 / portTICK_PERIOD_MS);  
    }
}