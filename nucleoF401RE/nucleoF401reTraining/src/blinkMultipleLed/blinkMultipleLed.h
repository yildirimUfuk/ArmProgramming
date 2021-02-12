#include<Arduino.h>
#include "stm32f4xx_hal.h";
class blinkMultipleLed
{
private:
    /* data */
public:
    void setupLedOutput();
    void toggleMultipleLed();

    blinkMultipleLed(/* args */);
    ~blinkMultipleLed();

};
