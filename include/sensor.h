#ifndef SENSOR_H
#define SENSOR_H

#include <Arduino.h>

struct SensorData {
    // Validity Flag: true = good data, false = sensor error/timeout
    bool valid; 

    // State sensors
    float PipeGrow;
    float WC_slab1;
    float WC_slab2;
    float HumDef;
    float Tair;     

    // Energy sensors
    float Iglob;
    float Tot_PAR;
    float RadSum;
    float PARout;
};

/**
 * @brief Reads the next sensor data sample.
 * Includes timeout and validity checks.
 */
SensorData get_sensor_reading();

#endif