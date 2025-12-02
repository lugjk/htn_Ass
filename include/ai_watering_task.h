#ifndef AI_WATERING_TASK_H
#define AI_WATERING_TASK_H

#include <Arduino.h>

/**
 * @brief Runs the full 30-minute data collection and AI inference cycle.
 * * BLOCKING FUNCTION: This will not return until the cycle is complete.
 * - In Real Mode: Takes ~30 minutes.
 * - In Mock Mode: Takes ~30 seconds.
 */
void measure_and_watering_BLOCKING();

#endif