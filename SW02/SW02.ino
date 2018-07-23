#include <xCore.h>
#include <xOD01.h>
#include <ESP8266WiFi.h>
#include "TIMER_CTRL.h"
#include <Adafruit_Sensor.h>
#include "Adafruit_BME680.h"

#define BME680_DEFAULT_ADDRESS       (0x76) 

#define SEALEVELPRESSURE_HPA (1013.25)

Adafruit_BME680 bme; // I2C

unsigned long currentMilli = 0;
int ledID = 0;

bool fade_flag1 = true;
unsigned long previousMilli1 = 0;    // timing variable for LEDS
int LED_state1 = 0;
bool fade_flag2 = true;
unsigned long previousMilli2 = 0;    // timing variable for LEDS
int LED_state2 = 0;
bool fade_flag3 = true;
unsigned long previousMilli3 = 0;    // timing variable for LEDS
int LED_state3 = 0;


void setup() {
  // put your setup code here, to run once:
  setup_program();
}

void loop() {
  // put your main code here, to run repeatedly:
  main_program();
}
