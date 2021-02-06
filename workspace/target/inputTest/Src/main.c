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

#include<stdio.h>
#include<stdint.h>

int main(void)
{
    uint32_t *pClockControlReg = (uint32_t *)0x40023830;
    uint32_t *pDModeReg = (uint32_t *)0x40020C00;
    uint32_t *pAModeReg = (uint32_t *)0x40020000;
    uint32_t *pDOutReg = (uint32_t *)0x40020c14;
    uint32_t *pAInReg = (uint32_t *)0x40020010;


    //turn on clock for GPIOA and GPIOD
    *pClockControlReg |= (1 << 3);
    *pClockControlReg |= (1 << 0);

    //clear GPIOD
    *pDModeReg &= ~(3 << 30);

   //set GPIOD
    *pDModeReg |= (1 << 30);

    //clear GPIOA
    *pAModeReg &= ~(3 << 0);

    while(1){
    	//read GPIOA
    	uint8_t pinStatus = (uint8_t)(*pAInReg & 0x1);
    	if(pinStatus ==0){
    		*pDOutReg |= (1 << 15);
    	} else {
    	    *pDOutReg &= (1 << 15);
    	}
    }


}
