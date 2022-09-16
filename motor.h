#ifndef motor_h
#define motor_h

#include "HCMotor.h"

const int MOTORPIN = 5;

HCMotor HCMotor;

class MOTOR_Controls {
  public:
    void begin() {
      HCMotor.Init();
      HCMotor.attach(0, DCMOTOR, MOTORPIN);
      HCMotor.DutyCycle(0, 100);
      HCMotor.OnTime(0, 0);
    }

    void ON(int Speed)
    {
      HCMotor.OnTime(0, Speed);
      Serial.println("Motor ON");
      Serial.print("Speed: " );
      Serial.println(Speed);
      Serial.println();
    }
    void OFF(int Speed = 0)
    {
      HCMotor.OnTime(0, Speed);
      Serial.println("Motor OFF");
      Serial.print("Speed: " );
      Serial.println(Speed);
      Serial.println();
    }
};

#endif
