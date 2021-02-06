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
    uint32_t *pDOutReg = (uint32_t *)0x40020c14;


    *pClockControlReg |= (1 << 3);
    //clear
    *pDModeReg &= ~(3 << 30);

   //set
    *pDModeReg |= (1 << 30);

     while(1){
    	 //output
    	    *pDOutReg |= (1 << 15);
    	    printf("Led on\n");


    	    for(uint32_t i =0;i < 2000000; i++);

    	    *pDOutReg &= ~(1 << 15);
    	    printf("Led off\n");

    		for(uint32_t i = 0; i < 2000000; i++);
     }

}
