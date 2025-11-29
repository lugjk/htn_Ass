#ifndef AI_WATERING_TASK_H
#define AI_WATERING_TASK_H

#include <Arduino.h>

/**
 * @brief Starts the background AI data collection cycle.
 * * This function spawns a FreeRTOS task that runs for 30 minutes, 
 * collecting sensor data every 5 minutes. After 6 samples, it 
 * runs the AI inference and triggers watering if needed.
 * * It is non-blocking and returns immediately.
 */
void measure_and_watering_TASK();

#endif