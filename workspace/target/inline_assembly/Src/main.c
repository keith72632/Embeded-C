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

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
    /* Loop forever
	__asm volatile("ldr r1,=#0x20001000");
	__asm volatile("ldr r2,=#0x20001004");
    __asm volatile("ldr r0, [r1]");
    __asm volatile("ldr r1, [r2]");
    __asm volatile("add r0,r0, r1");
	__asm volatile("str r0, [r2]");

	int val = 50;
	__asm volatile("mov r0,%0": :"r"(val));

	int control_reg;

	__asm volatile("mrs %0,CONTROL": "=r"(control_reg));

	int var1 = 10, var2;

	__asm ("mov %0, %1": "=r"(var2): "r"(var1));
	for(;;);
*/
	int p1, *p2;
	p2 = (int*)0x20000008;
	__asm volatile("LDR %0, [%1]": "=r"(p1): "r"(p2));
	return 0;
}
