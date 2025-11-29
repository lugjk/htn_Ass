// src/watering_ai_task.h

#ifndef WATERING_AI_TASK_H
#define WATERING_AI_TASK_H

#include <Arduino.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <array>

// Kích thước stack cho Task AI/ML (Đủ lớn)
constexpr uint32_t AI_TASK_STACK_SIZE = 8192; 
// 8 loại cảm biến được giả lập
constexpr uint8_t SENSOR_COUNT = 8;
// 6 lần đọc (30 phút / 5 phút)
constexpr uint8_t READING_CYCLES = 6; 
// Khoảng thời gian giữa các lần đọc là 5 phút
constexpr uint32_t READING_INTERVAL_MS = 5 * 60 * 1000; 

// Handle cho Task để quản lý
extern TaskHandle_t Measure_And_Watering_Handle;

// Khai báo Task Logic
void measure_and_watering(void *pvParameters);

// Khai báo Task Creator
void measure_and_watering_TASK();

#endif // WATERING_AI_TASK_H