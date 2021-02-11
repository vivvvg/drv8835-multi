#ifndef DRV8835MotorShield_h
#define DRV8835MotorShield_h

#if defined(__AVR_ATmega168__) || defined(__AVR_ATmega328P__) || defined (__AVR_ATmega32U4__)
  #define DRV8835MOTORSHIELD_USE_20KHZ_PWM
#endif

#include <Arduino.h>

class DRV8835MotorShield
{
  public:
    DRV8835MotorShield(unsigned char pin1 = 5, unsigned char pin2 = 6, unsigned char pin3 = 7, unsigned char pin4 = 8, boolean flip1 = false, boolean flip2 = false);
    void setM1Speed(int speed);
    void setM2Speed(int speed);
    void setSpeeds(int m1Speed, int m2Speed);
    void flipM1(boolean flip);
    void flipM2(boolean flip);
  
  private:
    void initPinsAndMaybeTimer();
    unsigned char _M1DIR;
    unsigned char _M2DIR;
    unsigned char _M1PWM;
    unsigned char _M2PWM;
    boolean _flipM1;
    boolean _flipM2;
    
    inline void init()
    {
      boolean initialized = false;

      if (!initialized)
      {
        initialized = true;
        initPinsAndMaybeTimer();
      }
    }
};
#endif