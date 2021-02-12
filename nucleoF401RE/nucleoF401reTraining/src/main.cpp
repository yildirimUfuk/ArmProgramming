// #include"./blinkLed/blinkLed.h"//include blinkLed class.
#include "./blinkMultipleLed/blinkMultipleLed.h";
void setup() {
  blinkMultipleLed blinkLeds;
  blinkLeds.setupLedOutput();
}

void loop() {
  // put your main code here, to run repeatedly:
  blinkMultipleLed blinkLeds;
  blinkLeds.toggleMultipleLed();
}