#include "neo_blinky.h"
#include "global.h"
#include <Arduino.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

extern int CheckAllconnection();

// --------------------------------------------------------------------------
// NEO_BLINKY - Task điều khiển trạng thái LED/NeoPixel
// Nhiệm vụ: Gọi CheckAllconnection() và điều khiển pin LED tương ứng
// --------------------------------------------------------------------------
void neo_blinky(void *pvParameters){
    // Loại bỏ cảnh báo tham số không sử dụng
    (void) pvParameters;

    // Khởi tạo các pin đầu ra
    // Note: NEO_GREEN_PIN, NEO_RED_PIN, NEO_YELLOW_PIN được định nghĩa trong global.h
    pinMode(NEO_GREEN_PIN, OUTPUT);
    pinMode(NEO_RED_PIN, OUTPUT);
    
    // Đảm bảo tất cả tắt khi bắt đầu
    digitalWrite(NEO_GREEN_PIN, LOW);
    digitalWrite(NEO_RED_PIN, LOW);

    Serial.println("[NEO] Task Điều Khiển NeoPixel Bắt Đầu");

    while(true){
        // 1. Kiểm tra trạng thái kết nối
        int status = CheckAllconnection();
        
        // 2. Điều khiển LED dựa trên trạng thái
        switch(status){
            case 1: // Tất cả OK (Xanh Lá)
                // Chế độ Xanh Lá: Nháy chậm (100ms ON / 1900ms OFF)
                digitalWrite(NEO_GREEN_PIN, HIGH);
                digitalWrite(NEO_RED_PIN, LOW);
                vTaskDelay(pdMS_TO_TICKS(100)); 
                digitalWrite(NEO_GREEN_PIN, LOW);
                vTaskDelay(pdMS_TO_TICKS(1900));
                break;

            case 2: // Lỗi một phần/Đang kết nối (2 mau)
                // Chế độ Vàng: Nháy nhanh (100ms ON / 200ms OFF)
                 digitalWrite(NEO_GREEN_PIN, HIGH);
                digitalWrite(NEO_RED_PIN, LOW);
                vTaskDelay(pdMS_TO_TICKS(500));
                digitalWrite(NEO_GREEN_PIN, LOW);

        // Đỏ 0.5s
                digitalWrite(NEO_RED_PIN, HIGH);
                vTaskDelay(pdMS_TO_TICKS(500));
                digitalWrite(NEO_RED_PIN, LOW);
                break;

            case 3: // Lỗi nghiêm trọng (Đỏ)
                // Chế độ Đỏ: Nháy trung bình (100ms ON / 400ms OFF)
                digitalWrite(NEO_GREEN_PIN, LOW);
                digitalWrite(NEO_RED_PIN, HIGH);
                vTaskDelay(pdMS_TO_TICKS(100)); 
                digitalWrite(NEO_RED_PIN, LOW);
                vTaskDelay(pdMS_TO_TICKS(400));
                break;
            
            default: // Trạng thái mặc định hoặc 0 (Chờ/Tắt)
                digitalWrite(NEO_GREEN_PIN, LOW);
                digitalWrite(NEO_RED_PIN, LOW);
                // Kiểm tra lại sau 1 giây
                vTaskDelay(pdMS_TO_TICKS(1000));
                break;
        }   
    }   
    // Task không bao giờ thoát khỏi vòng lặp
}


void green_neo_blinky(void *pvParameters){ (void) pvParameters;}
void red_neo_blinky(void *pvParameters){ (void) pvParameters;}