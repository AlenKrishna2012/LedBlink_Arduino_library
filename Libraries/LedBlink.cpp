#include "LedBlink.h"

LedBlink::LedBlink(uint8_t pin) {
  _pin = pin;
  _interval = 500;         // default interval 500 ms
  _previousMillis = 0;
  _ledState = LOW;
}

void LedBlink::begin() {
  pinMode(_pin, OUTPUT);
  digitalWrite(_pin, LOW);
}

void LedBlink::setInterval(unsigned long interval) {
  _interval = interval;
}

void LedBlink::update() {
  unsigned long currentMillis = millis();
  if (currentMillis - _previousMillis >= _interval) {
    _previousMillis = currentMillis;
    _ledState = !_ledState;
    digitalWrite(_pin, _ledState);
  }
}