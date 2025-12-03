#include "sensor.h"

// Helper to check if a number is valid
bool is_valid_reading(float val, float min, float max) {
    if (isnan(val)) return false; // Check for NaN
    if (val < min || val > max) return false; // Check bounds
    return true;
}

SensorData get_sensor_reading() {
    SensorData s;
    s.valid = false; // Default to fail until proven innocent

    Serial.println("REQ_DATA"); 

    // 1. TIMEOUT CHECK
    unsigned long start = millis();
    // Wait max 2 seconds for data (Mock Mode) or Sensor Response
    while (Serial.available() == 0) {
        if (millis() - start > 2000) {
            Serial.println("[SENSOR ERROR] ❌ Timeout! No data received.");
            return s; // Returns valid=false
        }
        vTaskDelay(10 / portTICK_PERIOD_MS);
    }

    // 2. PARSE DATA
    String line = Serial.readStringUntil('\n');
    line.trim();

    int count = sscanf(line.c_str(), "%f,%f,%f,%f,%f,%f,%f,%f,%f", 
           &s.PipeGrow, &s.WC_slab1, &s.WC_slab2, &s.HumDef, &s.Tair, 
           &s.Iglob, &s.Tot_PAR, &s.RadSum, &s.PARout
    );

    if (count != 9) {
        Serial.println("[SENSOR ERROR] ❌ Malformed Data Packet!");
        return s;
    }

    // 3. SANITY CHECK
    // Check key sensors for realistic values.
    if (!is_valid_reading(s.Tair, -10.0, 60.0)) {
        Serial.println("[SENSOR ERROR] ❌ Temperature out of bounds!");
        return s;
    }
    if (!is_valid_reading(s.WC_slab1, 0.0, 100.0)) {
        Serial.println("[SENSOR ERROR] ❌ WC_slab1 out of bounds!");
        return s;
    }

    // If we survived all checks:
    s.valid = true;
    Serial.println("[SENSOR DRIVER] Data Validated ✅");
    return s;
}