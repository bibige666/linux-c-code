#include "stm32f10x.h"
typedef unsigned int u32;
voidd SystemInit(void){
}

void delay(u32 i){
    while(i--);
}
int main(void){
    RCC_APB2ENR |=(1<<3);
    GPIOB_CRL &=~(0xf<<20);
    GPIOB_CRL |=(3<<20);

    GPIOB_ODR |=(1<<5);
    while(1){
    GPIOB_ODR &=~(1<<5);
    delay(oxFFFFF);
    GPIOB_ODR |=(1<<5);
    delay(0xFFFFF);
    }
}
