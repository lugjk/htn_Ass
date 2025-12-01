// src/watering_ai_task.cpp

#include "watering_ai_task.h"
#include "global.h" // Cần để truy cập các biến toàn cục (glob_temperature, glob_humidity)

// Định nghĩa Handle
TaskHandle_t Measure_And_Watering_Handle = NULL;

// --- HÀM GIẢ LẬP ĐỌC DỮ LIỆU TỪ COREIOT ---
static std::array<float, SENSOR_COUNT> SimulateReadFromCoreIOT() {
    // Lấy dữ liệu động từ DHT20 Task đang chạy song song
    float t_air = glob_temperature; 
    float r_hair = glob_humidity;  

    // 6 giá trị còn lại là GIẢ LẬP
    float pipe_grow = 22.0f;
    float tot_par = 500.0f;
    float rad_sum = 250.0f;
    float par_out = 100.0f;
    float wc_slab1 = 0.45f;
    float wc_slab2 = 0.50f;

    Serial.println("[SIM] ----------------------------------------------------");
    Serial.println("[SIM] Assuming successful retrieval of 8 data points from CoreIOT.");
    Serial.printf("[SIM] Data: Tair=%.2f, Rhair=%.2f, WC1=%.2f, WC2=%.2f\n", t_air, r_hair, wc_slab1, wc_slab2);
    Serial.println("[SIM] ----------------------------------------------------");

    // Tair, Rhair, PipeGrow, Tot_PAR, RadSum, PARout, WC_slab1, WC_slab2
    return {t_air, r_hair, pipe_grow, tot_par, rad_sum, par_out, wc_slab1, wc_slab2}; 
}

// --- HÀM GIẢ LẬP ĐIỀU KHIỂN BƠM (Dùng printf) ---
static void SimulatePumpWatering(const float watering_amount) {
    if (watering_amount > 0) {
        // In ra Serial thay vì điều khiển GPIO
        Serial.println("===================================================");
        Serial.printf("!!! [WATERING ACTION] Pump START: %.2f Liters !!!\n", watering_amount);
        Serial.println("===================================================");
        
        // Set pump active flag
        isPumpActive = true;
        
        vTaskDelay(pdMS_TO_TICKS(500)); // Giả lập thời gian bơm ngắn
        
        Serial.println("!!! [WATERING ACTION] Pump STOP (Simulated delay) !!!");
        
        // Clear pump active flag
        isPumpActive = false;

    } else {
        Serial.println("[WATERING ACTION] No watering needed (Amount <= 0).");
    }
}

// --- HÀM GIẢ LẬP CHẠY AI (Logic đơn giản dựa trên trung bình 30 phút) ---
static float RunAIPrediction(const std::array<std::array<float, SENSOR_COUNT>, READING_CYCLES>& input_data) {
    float avg_temp = 0;
    float avg_humi = 0;

    for (const auto& reading : input_data) {
        avg_temp += reading[0];
        avg_humi += reading[1];
    }
    avg_temp /= READING_CYCLES;
    avg_humi /= READING_CYCLES;

    Serial.println("[AI] Summarizing 30-minute data...");
    Serial.printf("[AI] Avg Temp: %.2f, Avg Humi: %.2f\n", avg_temp, avg_humi);
    
    // Logic AI giả định: Nếu nóng và khô, tưới nhiều hơn
    float required_watering_amount = 0.2f; 
    if (avg_temp > 28.0f && avg_humi < 70.0f) {
        required_watering_amount = 0.75f;
    }

    Serial.printf("[AI] Prediction result: %.2f Liters of water required.\n", required_watering_amount);
    return required_watering_amount;
}


// --- TASK LOGIC CHÍNH: measure_and_watering ---
void measure_and_watering(void *pvParameters) {
    std::array<std::array<float, SENSOR_COUNT>, READING_CYCLES> sensor_data_history;
    
    for (;;) { 
        Serial.println("\n---------------------------------------------------");
        Serial.println("--- START: 30-MINUTE AI WATERING CYCLE ---");
        Serial.println("---------------------------------------------------");
        
        // Vòng lặp 6 lần, mỗi lần cách nhau 5 phút
        for (uint8_t i = 0; i < READING_CYCLES; ++i) {
            
            Serial.printf("[Cycle %d/%d] Reading data from CoreIOT server...\n", i + 1, READING_CYCLES);
            sensor_data_history[i] = SimulateReadFromCoreIOT();
            
            if (i < READING_CYCLES - 1) {
                Serial.printf("[Wait] Waiting for 5 minutes (%u ms)...\n", READING_INTERVAL_MS);
                vTaskDelay(pdMS_TO_TICKS(READING_INTERVAL_MS));
            }
        }
        
        // Chạy AI và Gọi bơm nước (Giả lập)
        float required_watering_amount = RunAIPrediction(sensor_data_history);
        SimulatePumpWatering(required_watering_amount);

        Serial.println("\n---------------------------------------------------");
        Serial.println("--- CYCLE ENDED. WAITING FOR NEXT 30-MINUTE BLOCK. ---");
        Serial.println("---------------------------------------------------");
        
        // Chờ 5 phút cuối cùng để bắt đầu chu kỳ tiếp theo (tổng 30 phút thu thập + 5 phút chờ)
        vTaskDelay(pdMS_TO_TICKS(5 * 60 * 1000));
    }
}

// Task Creator
void measure_and_watering_TASK() {
    xTaskCreatePinnedToCore(
        measure_and_watering,         
        "GreenhouseAI",               // Tên Task
        AI_TASK_STACK_SIZE,           
        NULL,                         
        1,                            // Priority
        &Measure_And_Watering_Handle, 
        1                             // Core ID
    );
    Serial.println("[Task] 'GreenhouseAI' Simulation Task created.");
}