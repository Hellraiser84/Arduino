#include "led.h"
#include "motor.h"

const byte statusBoxLed = 2;
const byte statusFanLed = 4;

LED_Controls LED;
MOTOR_Controls MOTOR;

unsigned long motorStartTime;
unsigned long motorPrevTime;
const int motorInterval = 10000;

void setup() {
  motorStartTime = millis();
  Serial.begin(9600);
  LED.preStart(statusBoxLed);
  
  LED.begin(statusBoxLed);  
  LED.begin(statusFanLed);  

  MOTOR.begin();
  
  LED.ON(statusBoxLed);
}

void loop() {
  motorPrevTime = millis(); 

  
}
