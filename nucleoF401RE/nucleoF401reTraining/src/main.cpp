#include"./blinkLed/blinkLed.h"//include blinkLed class.
void setup() {
  blinkLed myBlinkLedObj;
  myBlinkLedObj.setupPinOutputMode();
}

void loop() {
  // put your main code here, to run repeatedly:
  blinkLed myBlinkLedObj;
  myBlinkLedObj.toggleLed();
}