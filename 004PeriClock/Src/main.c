/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#define ADC_BASE_ADDR 		0x40012000UL
#define ADC_CR1_REG_OFFSET 	0x04UL
#define ADC_CR1_REG_ADDR 	(ADC_BASE_ADDR + ADC_CR1_REG_OFFSET)

#define RCC_BASE_ADDR		0x40023800UL
#define RCC_APB2_ENR_OFFSET	0x44UL
#define RCC_APB2_ENR_ADDR	(RCC_BASE_ADDR + RCC_APB2_ENR_OFFSET)

int main(void)
{
	uint32_t *pRccApbEnrReg = (uint32_t *) RCC_APB2_ENR_ADDR;
	uint32_t *pAdcCr1Reg = (uint32_t *) ADC_CR1_REG_ADDR;

	// Enabling the peri clock for ADC1
	*pRccApbEnrReg |= (1 << 8);

	*pAdcCr1Reg |= (1 << 8);

	for(;;);
}
