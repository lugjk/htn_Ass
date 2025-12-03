#ifndef SENSOR_H
#define SENSOR_H

#include <Arduino.h>

// 1. Structure to hold raw sensor values
struct SensorData {
    // State sensors (For Averaging)
    float PipeGrow;
    float WC_slab1;
    float WC_slab2;
    float HumDef;
    float Tair;     

    // Energy sensors (For Summing)
    float Iglob;
    float Tot_PAR;
    float RadSum;
    float PARout;
};

/**
 * @brief Reads the next sensor data sample.
 * * In Simulation Mode, this iterates through a stored dataset.
 * In Real Mode, this would query physical pins/libs.
 * * @return SensorData struct with the latest values.
 */
SensorData read_sensors_now();

#endif