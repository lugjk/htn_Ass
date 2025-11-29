#include "neo_blinky.h"
#include "global.h" // <--- QUAN TRỌNG: Cần dòng này để đọc biến glob_temperature

void neo_blinky(void *pvParameters){

    // Khởi tạo đối tượng NeoPixel (giữ nguyên thông số từ file gốc của bạn)
    Adafruit_NeoPixel strip(LED_COUNT, NEO_PIN, NEO_GRB + NEO_KHZ800);
    strip.begin();
    
    // Đặt độ sáng vừa phải (0-255) để đỡ chói mắt, bạn có thể chỉnh lại nếu muốn
    strip.setBrightness(50); 
    
    strip.clear();
    strip.show();

    while(1) {
        uint32_t color;
        int delay_time = 0;

        // --- KIỂM TRA NHIỆT ĐỘ ---
        if (glob_temperature > 40.0) 
        {
            // Nếu > 40 độ: Màu ĐỎ, nháy NHANH (100ms)
            color = strip.Color(255, 0, 0); 
            delay_time = 100;
        }
        else 
        {
            // Nếu <= 40 độ: Màu XANH LÁ, nháy CHẬM (1000ms)
            color = strip.Color(0, 255, 0); 
            delay_time = 1000;
        }

        // 1. BẬT ĐÈN (theo màu đã chọn)
        strip.setPixelColor(0, color); 
        strip.show(); 
        
        // Dùng portTICK_PERIOD_MS để đảm bảo tính đúng mili giây trong FreeRTOS
        vTaskDelay(delay_time / portTICK_PERIOD_MS);

        // 2. TẮT ĐÈN
        strip.setPixelColor(0, strip.Color(0, 0, 0)); 
        strip.show(); 

        vTaskDelay(delay_time / portTICK_PERIOD_MS);
    }
}