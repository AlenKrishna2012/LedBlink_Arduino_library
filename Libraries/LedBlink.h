#ifndef LEDBLINK_H
#define LEDBLINK_H

#include <Arduino.h>

class LedBlink {
  public:
    LedBlink(uint8_t pin);
    void begin();
    void setInterval(unsigned long interval);
    void update();

  private:
    uint8_t _pin;
    unsigned long _interval;
    unsigned long _previousMillis;
    bool _ledState;
};

#endif