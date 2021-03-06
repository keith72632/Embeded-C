/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
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
#include <stdio.h>
#include "main.h"


int main(void)
{
	RCC_AHB1ENR_t *pClockControlReg = (RCC_AHB1ENR_t *)0x40023830;
	GPIOx_MODER_t *pDModeReg = (GPIOx_MODER_t *)0x40020C00;
	GPIOx_ODR_t *pDOutReg = (GPIOx_ODR_t *)0x40020c14;

	//clock
    //*pClockControlReg |= (1 << 3);
	pClockControlReg->gpiod_en = 1;
    //clear
    //*pDModeReg &= ~(3 << 24);
    //set
    // *pDModeReg |= (1 << 24);
	pDModeReg->mode_r12 = 1;


     while(1){
    	 //output
    	 //   *pDOutReg |= (1 << 12);
    	 pDOutReg->odr_12 = 0x01;
    	 printf("Led on\n");


    	 for(uint32_t i =0;i < 2000000; i++);

    	 //   *pDOutReg &= ~(1 << 12);
    	 pDOutReg->odr_12 = 0x00;
    	 printf("Led off\n");

    	 for(uint32_t i = 0; i < 2000000; i++);
     }

}
