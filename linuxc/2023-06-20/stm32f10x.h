#ifndef __STM32F10X_H
#define __STM32F10X_H

#define PERIPH_BASE((unsigned int)0x40000000)
#define APB2PEIPH_BASE(PERIPH_BASE+0x10000)
#define AHBPERIPH_BASH (PERIPH_BASE+0x20000)

#define GPIOB_BASE(APB2PERIPH_BASE+0xc00)
#define RCC_BASE (AHBPERIPH_BASE+0xxx1000)

#define GPIOB_CRL(*(unsigned int *)(GPIOB_BASE+0x00))
#define GPIOB_CRH(*(unsigned int *)(GPIOB_BASE+0x04))
#define GPIOB_ODR(*(unsigned int *)(GPIOB_BASE+0x0c))
#define GPIOB_BSRR(*(unsigned int *)(GPIOB_BASE+0x10))

#define RCC_APB2ENR(*(unsigned int *)(RCC_BASE+0x18))

#endif











