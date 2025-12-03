#include "scheduler_task.h"
#include "config.h"
#include "ai_watering_task.h"
#include <WiFi.h>
#include <time.h>
#include  <global.h>
// --- USER CONFIGURATION ---
#define WIFI_SSID "YOUR_WIFI_SSID"
#define WIFI_PASS "YOUR_WIFI_PASS"

// MOCK_MODE:
// true  = Sleep for 1 minute between cycles.
// false = Sleep until next 3H slot OR 3 hours blind if offline.
#ifndef MOCK_MODE
    #define MOCK_MODE false
#endif

// Timezone: Vietnam (UTC+7) = 7 * 3600 = 25200
#define GMT_OFFSET_SEC 25200 
#define DAYLIGHT_OFFSET_SEC 0
#define NTP_SERVER "pool.ntp.org"

// RTC Memory: Survives Deep Sleep
RTC_DATA_ATTR int boot_count = 0;

// Helper: Connect to WiFi (Returns true if success)
bool connect_wifi() {
    if (WiFi.status() == WL_CONNECTED) return true;
    
    Serial.print("[SCHEDULER] Connecting to WiFi: ");
    Serial.println(WIFI_SSID);
    
    WiFi.begin(WIFI_SSID, WIFI_PASS);
    
    int retries = 0;
    while (WiFi.status() != WL_CONNECTED && retries < 20) {
        delay(500);
        Serial.print(".");
        retries++;
    }
    
    if (WiFi.status() == WL_CONNECTED) {
        Serial.println("\n[SCHEDULER] WiFi Connected!");
        return true;
    } else {
        Serial.println("\n[SCHEDULER] ❌ WiFi Failed.");
        return false;
    }
}

// Helper: Sync Time via NTP (Returns true if success)
bool sync_time() {
    if (WiFi.status() != WL_CONNECTED) return false;

    configTime(GMT_OFFSET_SEC, DAYLIGHT_OFFSET_SEC, NTP_SERVER);
    
    Serial.print("[SCHEDULER] Waiting for NTP time sync");
    struct tm timeinfo;
    
    // Wait up to 10s for time
    int retries = 0;
    while (!getLocalTime(&timeinfo) && retries < 10) {
        Serial.print(".");
        delay(1000);
        retries++;
    }
    
    if (retries < 10) {
        Serial.println("\n[SCHEDULER] Time Synced: " + String(asctime(&timeinfo)));
        return true;
    } else {
        Serial.println("\n[SCHEDULER] ❌ Time Sync Failed!");
        return false;
    }
}

// Helper: Calculate seconds until next 3H slot
// Slots: 02:30, 05:30, 08:30...
uint64_t get_sleep_seconds_precise() {
    struct tm now;
    if (!getLocalTime(&now)) return 0; // Should be handled by caller

    int current_minutes = now.tm_hour * 60 + now.tm_min;
    
    // Base: 02:30 AM = 150 minutes
    int next_slot_minutes = 150; 
    const int interval_minutes = 180; // 3 Hours

    // Find next slot
    while (next_slot_minutes <= current_minutes) {
        next_slot_minutes += interval_minutes;
    }
    
    int diff_minutes = next_slot_minutes - current_minutes;

    Serial.printf("[SCHEDULER] Current: %02d:%02d. Next Slot: %d min. Wait: %d min.\n", 
                  now.tm_hour, now.tm_min, next_slot_minutes, diff_minutes);
    
    // Exact seconds calculation
    long total_sleep_seconds = (diff_minutes * 60) - now.tm_sec;
    
    if (total_sleep_seconds <= 0) return 60; // Safety min 1 minute

    return (uint64_t)total_sleep_seconds;
}

void run_scheduler_and_sleep() {

    boot_count++;
    Serial.printf("\n[SCHEDULER] Boot Number: %d\n", boot_count);

    // 1. CONNECT & SYNC
    // Now running in BOTH Mock and Real modes to test connectivity
    bool wifi_ok = isWifiConnected;
    bool time_ok = false;
    
    if (wifi_ok) {
        time_ok = sync_time();
    }

    // 2. RUN AI (BLOCKING)
    // Run this REGARDLESS of wifi status. 
    // The show must go on! (Offline Fallback)
    measure_and_watering_BLOCKING();

    // 3. CALCULATE DEEP SLEEP DURATION
    uint64_t sleep_sec = 0;

    #if MOCK_MODE
    if(time_ok) {
        // Online in mock mode
        Serial.println("[SCHEDULER] MOCK MODE: 🌐 Online! Sleeping for 1 minute.");
    }
    else {
        // Offline in mock mode
        Serial.println("[SCHEDULER] MOCK MODE: ❌ Offline! Sleeping for 1 minute.");
    }
        sleep_sec = 60;
    #else
        if (time_ok) {
            // Online: Be Precise
            Serial.println("[SCHEDULER] ONLINE: Syncing with 3H schedule...");
            sleep_sec = get_sleep_seconds_precise();
        } else {
            // Offline: Fallback to approx 3 Hours
            Serial.println("[SCHEDULER] ⚠️ OFFLINE: Blind sleep for 3 Hours.");
            sleep_sec = 10800; // 3 hours * 60 * 60
        }
    #endif

    // 4. ENTER DEEP SLEEP
    Serial.printf("[SCHEDULER] 💤 Entering Deep Sleep for %llu seconds...\n", sleep_sec);
    Serial.flush(); 

    // 5. UPLOAD DATA TO SERVER
    // TODO: Core IoT code here, it have to be BLOCKING CODE


    esp_sleep_enable_timer_wakeup(sleep_sec * 1000000ULL);
    esp_deep_sleep_start();
}