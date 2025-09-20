# LedBlink

A simple Arduino library to blink an LED on any pin with a configurable interval.

## Features

- Blink an LED on any digital pin
- Set custom blink intervals (milliseconds)
- Easy to use and integrate

## Installation

### Using Arduino Library Manager

Search for **LedBlink** and install directly from the Arduino IDE.

### Manual Installation

1. Download or clone this repository:
   bash
   git clone https://github.com/AlenKrishna2012/LedBlink_Arduino_library/tree/3711e3793fa2ed58665a1b734c2f488c041ee594/Libraries
   2. Copy the LedBlink folder into your Arduino libraries directory (Documents/Arduino/libraries).
3. Restart the Arduino IDE.
4. Include the library in your sketch:
   cpp
   #include <LedBlink.h>
   
## Usage

cpp
#include <LedBlink.h>

// Blink LED on pin 13 every 500 ms
LedBlink led(13, 500);

void setup() {
  led.begin();
}

void loop() {
  led.update();
}

## API

| Function                              | Description                         |
|-------------------------------------|-----------------------------------|
| LedBlink(uint8_t pin, unsigned long interval) | Constructor: pin and blink interval (ms) |
| void begin()                      | Initialize the LED pin             |
| void update()                     | Call repeatedly in loop to blink  |

## Author

AlenKrishna V.U (alenkrishnavu@gmail.com)
