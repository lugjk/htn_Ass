#include "sensor.h"

// No more hardcoded dataset here! 
// We are now a slave to the Serial Monitor.

SensorData read_sensors_now() {
    SensorData s;
    
    // 1. Handshake: Tell the laptop we are ready
    // We use a specific tag so the Python script knows when to send
    Serial.println("REQ_DATA"); 

    // 2. Wait for data (Blocking)
    // The FreeRTOS task will hang here until you send a line
    while (Serial.available() == 0) {
        vTaskDelay(10 / portTICK_PERIOD_MS); // Yield to other tasks while waiting
    }

    // 3. Read the incoming line
    // Expected format: "PipeGrow,WC_slab1,WC_slab2,HumDef,Tair,Iglob,Tot_PAR,RadSum,PARout"
    String line = Serial.readStringUntil('\n');
    line.trim(); // Remove whitespace/newlines

    // 4. Parse the CSV string
    // We use sscanf for quick parsing of the comma-separated string
    // Note: The order MUST match the Python script's sending order!
    int count = sscanf(line.c_str(), "%f,%f,%f,%f,%f,%f,%f,%f,%f", 
           &s.PipeGrow, 
           &s.WC_slab1, 
           &s.WC_slab2, 
           &s.HumDef, 
           &s.Tair, 
           &s.Iglob, 
           &s.Tot_PAR, 
           &s.RadSum, 
           &s.PARout
    );

    if (count != 9) {
        Serial.println("[ERROR] Malformed CSV line received!");
        // Return zeros or safe defaults if parsing failed
        return s; 
    }

    Serial.println("[SENSOR DRIVER] Data received and parsed.");
    return s;
}