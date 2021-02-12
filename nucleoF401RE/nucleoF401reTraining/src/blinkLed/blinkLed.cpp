#include"blinkLed.h";
void blinkLed::setupPinOutputMode(){
    //the clock of the port to be used must be enabled. Like GPIOA 
    __HAL_RCC_GPIOA_CLK_ENABLE();

    GPIO_InitTypeDef myGpio;
    myGpio.Mode=OUTPUT;//this makes its mode output. Its comes from arduino framework.
    myGpio.Pin=GPIO_PIN_5;
    // myGpio.Mode=GPIO_MODE_OUTPUT_PP;//this makes its mode output. Its comes from hall.
    // it must be initialized. First parameter is port name. Second is which gpio pin.
    HAL_GPIO_Init(GPIOA,&myGpio);
}
void blinkLed::toggleLed(){
    HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_5);// it changes leds situation. High/Low
    HAL_Delay(3000);//wait xxxx miliSeconds.
}
blinkLed::blinkLed(){}
blinkLed::~blinkLed(){}