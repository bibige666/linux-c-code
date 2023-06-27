//练习keil main.c  LED0寄存器
#include "stm32f10x.h"

typedef unsigned int u32

void Systemlnit(void){

}

//定义延时函数
void delay(u32 i){
	while(i--); //就是让CPU在这里疯狂旋转,消耗时间,起到一个延时等待的作用
}

int main(void){
	//1.初始化LED0
	//1.1使能GPIOB控制器的时钟
	RCC_APB2ENR |=(1<<3); //BIT[3]=1
	
	//1.2设置GPIOB5为推挽输出并且输出频率最大50MHz
	GPIOB_CRL &=~(0xF<<20); //BIT[23:20]=0000 先清0
	GPIOB_CRL |=(3<<20);  //BIT[23:20]=0011 后置位

	//1.3默认输出1,关灯省电,具体参见
	GPIOB_ODR |=(1<<5);  //BIT[5]=1,输出高电平

	while(1){
		//2.输出0开灯
		GPIOB_ODR &=~(1<<5); //BIT[5]=0,输出低电平
		//3.延时
		delay(0xFFFFF);
		//4.输出1关灯
		GPIOB_ODR |=(1<<5); //BIT[5]=1,输出高电平
		//5延时
		delay(0xFFFFF);
	}
}




































