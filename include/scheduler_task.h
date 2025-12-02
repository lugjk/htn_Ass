#ifndef SCHEDULER_TASK_H
#define SCHEDULER_TASK_H

#include <Arduino.h>

/**
 * @brief Main entry point for the Smart Irrigation Cycle.
 * * 1. Connects to WiFi.
 * 2. Syncs time (NTP).
 * 3. Runs the AI Watering Task (Blocking).
 * 4. Calculates time to next 3H slot (starting 05:30).
 * 5. Enters Deep Sleep.
 */
void run_scheduler_and_sleep();

#endif