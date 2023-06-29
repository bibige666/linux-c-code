#ifndef __STM32F10X_H
#define __STM32F10X_H

//定义各个总线和寄存器的物理地址信息

#define PERIPH_BASE ((unsigned int)0x40000000)//外设总线的基地址
#define APB2PERIPH_BASE (PERIPH_BASE+0x10000)//APB2总线的基地址
#define AHBPERIPH_BASE (PERIPH_BASE+0x20000)//AHB总线的基地址

#define GPIOB_BASE (APB2PERIPH_BASE+0xC00)//GPIOB控制论总线的基地址
#define RCC_BASE (AHBPERIPH_BASE+0x1000)//RCC控制器的基地址

#define GPIOB_CRL(*(unsigned int*)(GPIOB_BASE+0x00))//GPIOB端口低寄存器
#define GPIOB_CRH(*(unsigned int*)(GPIOB_BASE+0x04))//GPIOB端口高寄存器
#define GPIOB_ODR(*(unsigned int *)(GPIOB_BASE+0x0C))//GPIOB端口输出积存器
#define GPIOB_BSRR(*(unsigned int *)(GPIOB_BASE+0x10))//GPIOB端口清除寄存器

#define RCC_APB2ENR (*(unsignd int *)(RCC_BASE+0x18))

#endif
