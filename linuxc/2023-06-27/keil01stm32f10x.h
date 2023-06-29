//keil 单片机LED灯.H文件

#ifndef __STM32F10X_H
#define __STM32F10X_H

//定义各个总线和寄存器的物理地址信息

#define PERIPH_BASE ((unsigned int)0x40000000)//外设总线
#define APB2PERIPH_BASE (PERIPH_BASE+0x10000)//APB2总线
#define AHBPERIPH_BASE (PERIPH_BASE+0x20000)//AHB总线

#define GPIOB_BASE (APB2PERIPH_BASE+0xC00) //GPIOB控制器的基地址
#define RCC_BASE (AHBPERIPH_BASE+0x1000)//RCC控制器的基地址

#define GPIOB_CRL(*(unsigned int *)(GPIOB_BASE +0x00))//GPIOB端口配置低寄存器
#define GPIOB_CRH(*(unsigned int *)(GPIOB_BASE+0x04))//GPIOB端口配置高寄存器
#define GPIOB_ODR(*(unsigned int *)(GPIOB_BASE+0x0C))//GPIOB端口数据输出寄存器
#define GPIOB_BSRR(*(unsigned int *)(GPIOB_BASE+0x10))//GPIOB端口清除寄存器

#define RCC_APB2ENR(*(unsigned int *)(RCC_BASE+0x18))//APB2总线控制器时钟配置寄存器

#endi
