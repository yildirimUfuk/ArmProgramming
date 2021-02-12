#include<Arduino.h>
#include"stm32f4xx_hal.h";
class blinkLed
{
private:
    /* data */
public:
    blinkLed(/* args */);
    ~blinkLed();
    void setupPinOutputMode();
    void toggleLed();
};