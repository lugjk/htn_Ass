#ifndef AI_WATERING_TASK_H
#define AI_WATERING_TASK_H

#include <Arduino.h>

/**
 * @brief Runs the full AI cycle with Error Handling.
 * @return true if cycle completed and prediction made.
 * @return false if too many sensor errors occurred (Safety Abort).
 */
bool measure_and_watering_BLOCKING();

#endif