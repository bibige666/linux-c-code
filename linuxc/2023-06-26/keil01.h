//练习需要kell软件
#ifndef __STM32F10X_H
#define __STM32F10X_H

//定义各个总线和寄存器的物理地址信息
#define PERIPH_BASE ((unsigned int)0x40000000)//外设总线的基地址
#define APB2PERIPH_BASE (PERIPH_BASH+0x10000)//APB2总线的基地址
#define AHBPERIPH_BASE (PERIPH_BASE+0x20000)//AHB总线的基地址

#define GPIOB_BASE (APB2PERIPH_BASE+0xc00)//GPIOB控制器的基地址
#define RCC_BASE (AHBPERIPH_BASE+0x1000)//RCC控制器的基地址

#define GPIO_CRL(*(unsigned int *)(GPIOB_BASE+0x00))//GPIOB端口配置低寄存器
#define GPIO_CRH(*(unsigned int *)(GPIOB_BASE+0x04))//GPIOB端口配置高寄存器
#define GPIO_ODR(*(unsigned int *)(GPIOB_BASE+0x0c))//GPIOB端口输出数据寄存器
#define GPIO_BSRR(*(unsigned int *)(GPIOB_BASE+0x10))//GPIOB端口位设置清除寄存器

