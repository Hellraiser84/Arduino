#ifndef led_h
#define led_h

class LED_Controls {
  public:
    void begin(byte GPIO_pin) {
      pinMode(GPIO_pin, OUTPUT);
    }
    
    void preStart(byte GPIO_pin)
    {
      Serial.println("Sensor Box ONLINE");
      Serial.println();
      delay(1000);
      
      Serial.print("Calibrating");
      for (int i = 0; i < 3; i++)
      {
        Serial.print('.');
        delay(1000);
      }
     
      Serial.println("Calibration Complete");
      ON(GPIO_pin);
      delay(1000);
    }
    
    void ON(byte GPIO_pin)
    {
      digitalWrite(GPIO_pin, HIGH);
    }
    
    void OFF(byte GPIO_pin)
    {
      digitalWrite(GPIO_pin, LOW);
    }

    void flash(byte GPIO_pin, int flashSpeed, int flashCount)
    {
      for (int i = 0; i < flashCount; i++)
      {
        ON(GPIO_pin);
        delay(flashSpeed);
        OFF(GPIO_pin);
        delay(flashSpeed);
      }
    }
};

#endif
