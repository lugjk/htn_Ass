#include "task_handler.h"
#include "task_webserver.h"   // <--- QUAN TRỌNG: Để dùng được biến 'ws'
#include "task_check_info.h"  // <--- QUAN TRỌNG: Để dùng hàm 'Save_info_File'
#include "global.h"           // <--- QUAN TRỌNG: Để cập nhật biến toàn cục (WIFI_SSID...)

void handleWebSocketMessage(String message)
{
    Serial.println("📩 Nhận tin nhắn WS: " + message);
    
    // Tăng kích thước buffer lên 512 hoặc 1024 để đảm bảo chứa đủ JSON cấu hình
    StaticJsonDocument<1024> doc;

    DeserializationError error = deserializeJson(doc, message);
    if (error)
    {
        Serial.print("❌ Lỗi parse JSON: ");
        Serial.println(error.c_str());
        return;
    }

    // --- TRANG ĐIỀU KHIỂN THIẾT BỊ ---
    if (doc["page"] == "device")
    {
        JsonObject value = doc["value"];
        if (!value.containsKey("gpio") || !value.containsKey("status"))
        {
            Serial.println("⚠️ JSON thiếu thông tin gpio hoặc status");
            return;
        }

        int gpio = value["gpio"];
        String status = value["status"].as<String>();

        Serial.printf("⚙️ Điều khiển GPIO %d → %s\n", gpio, status.c_str());
        
        pinMode(gpio, OUTPUT);
        if (status.equalsIgnoreCase("ON"))
        {
            digitalWrite(gpio, HIGH);
            Serial.printf("🔆 GPIO %d ON\n", gpio);
        }
        else if (status.equalsIgnoreCase("OFF"))
        {
            digitalWrite(gpio, LOW);
            Serial.printf("💤 GPIO %d OFF\n", gpio);
        }
    }
    // --- TRANG CẤU HÌNH (SETTING) ---
    else if (doc["page"] == "setting")
    {
        // 1. Lấy dữ liệu từ JSON
        String new_ssid = doc["value"]["ssid"].as<String>();
        String new_pass = doc["value"]["password"].as<String>();
        String new_token = doc["value"]["token"].as<String>();
        String new_server = doc["value"]["server"].as<String>();
        String new_port = doc["value"]["port"].as<String>();

        Serial.println("📥 Nhận cấu hình từ WebSocket:");
        Serial.println("SSID: " + new_ssid);
        Serial.println("PASS: " + new_pass);
        Serial.println("TOKEN: " + new_token);
        Serial.println("SERVER: " + new_server);
        Serial.println("PORT: " + new_port);

        // 2. Cập nhật vào biến toàn cục (để hệ thống dùng ngay lập tức)
        WIFI_SSID = new_ssid;
        WIFI_PASS = new_pass;
        CORE_IOT_TOKEN = new_token;
        CORE_IOT_SERVER = new_server;
        CORE_IOT_PORT = new_port;

        // Cập nhật luôn biến wifi dùng cho kết nối
        wifi_ssid = new_ssid;
        wifi_password = new_pass;

        // 3. Gọi hàm lưu cấu hình vào Flash/LittleFS
        Save_info_File(WIFI_SSID, WIFI_PASS, CORE_IOT_TOKEN, CORE_IOT_SERVER, CORE_IOT_PORT);

        // 4. Phản hồi lại client qua WebSocket
        // Lưu ý: Cần include task_webserver.h mới dùng được biến 'ws'
        String msg = "{\"status\":\"ok\",\"page\":\"setting_saved\"}";
        ws.textAll(msg);
        
        Serial.println("✅ Đã lưu cấu hình và phản hồi Client.");
    }
}