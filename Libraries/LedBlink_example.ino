#include <LedBlink.h>

LedBlink led(13);

void setup() {
  led.begin();
  led.setInterval(1000);   // Set blink interval to 1000 ms (1 second)
}

void loop() {
  led.update();
}