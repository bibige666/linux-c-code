#ifndef __STM32F10X_H
#define __STM32F10X_H

#define PERIPH_BASE ((unsigend int)0x40000000) //外设总线
#define APB2 (PERIPH_BASE+10000)//APB2总线
#define AHB (PERIPH_BASE+18000)//AHB总线

#define GPIOE(APB2+1800)//GPIOE端口基地址
#define RCC(AHB+3000)//RCC端口基地址

#define GPIOE_CRL(*(unsigend int)(GPIOE+0x00))//低地址寄存器
#define GPIOE_ODR(*(unsigend int)(GPIOE+0xch))//端口输出寄存器
#define GPIOE_BSRR(*(unsigend int)(GPIOE+0x10))//清除寄存器

#define RCC_APB2ENR(*(unsigend int)(RCC+0x18))//RCC时钟

#endif
