#include"blinkMultipleLed.h"
void blinkMultipleLed::setupLedOutput(){
    __HAL_RCC_GPIOA_CLK_ENABLE();
    __HAL_RCC_GPIOB_CLK_ENABLE();
    __HAL_RCC_GPIOC_CLK_ENABLE();

    GPIO_InitTypeDef gpioInitB;
    gpioInitB.Pin=GPIO_PIN_12;
    gpioInitB.Mode=GPIO_MODE_OUTPUT_PP;
    HAL_GPIO_Init(GPIOB,&gpioInitB);

    GPIO_InitTypeDef gpioInitC;
    gpioInitC.Pin=GPIO_PIN_8;
    gpioInitC.Mode=GPIO_MODE_OUTPUT_PP;
    HAL_GPIO_Init(GPIOC,&gpioInitC);

    GPIO_InitTypeDef gpioInitA;
    gpioInitA.Pin=GPIO_PIN_5;
    gpioInitA.Mode=GPIO_MODE_OUTPUT_PP;
    HAL_GPIO_Init(GPIOA,&gpioInitA);

}
void blinkMultipleLed::toggleMultipleLed(){
    HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_5);
    HAL_Delay(1000);
    HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_12);
    HAL_Delay(2000);
    HAL_GPIO_TogglePin(GPIOC,GPIO_PIN_8);
    HAL_Delay(3000);
}
blinkMultipleLed::blinkMultipleLed(){}
blinkMultipleLed::~blinkMultipleLed(){}