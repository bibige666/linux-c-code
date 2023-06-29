#include "stm32f10x_h"
typedef unsigned int u32;
void SystemInit(void){

}

//延时函数
void delay(u32 i){
    while(i--);
}

int main(void){

    //RCC时钟初始化
    RCC_APB2ENR |=(1<<6);//bit[6]置1

    GPIOE_CRL &=~(0xf<<20);//bit[5]清0
    GPIOE_CRL |=(3<<20);//0011 设置推挽输出 50HZ功率

    GPIOE_ODR |=(1<<5);//输出高电平关灯

    while(1){
    GPIOE_ODR &=(1<<5);//输出高电平开灯
    delay(FFFFF);
    GPIOE_ODR |=(1<<5);//输出高电平关灯
    delay(FFFFF);
    }
}
