#ifndef __NEO_BLINKY__
#define __NEO_BLINKY__
#include <Arduino.h>
#include <Adafruit_NeoPixel.h>



#define NEO_PIN 45
#define LED_COUNT 1 

void green_neo_blinky(void *pvParameters);
void red_neo_blinky(void *pvParameters);
void yellow_neo_blinky(void *pvParameters);

#endif