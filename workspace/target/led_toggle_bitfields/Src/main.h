/*
 * main.h
 *
 *  Created on: Feb 13, 2021
 *      Author: keith
 */

#ifndef MAIN_H_
#define MAIN_H_

#include <stdint.h>

typedef struct {
	uint32_t gpioa_en          :1;
	uint32_t gpiob_en          :1;
	uint32_t gpioc_en          :1;
	uint32_t gpiod_en          :1;
	uint32_t gpioe_en          :1;
	uint32_t gpiof_en          :1;
	uint32_t gpiog_en          :1;
	uint32_t gpioh_en          :1;
	uint32_t gpioi_en          :1;
	uint32_t gpioj_en          :1;
	uint32_t gpiok_en          :1;
	uint32_t reserved          :1;
	uint32_t CRCEN             :1;
	uint32_t reserved2         :5;
	uint32_t bkpsr_amen        :1;
	uint32_t reserved3         :1;
	uint32_t ccmdat_aramen     :1;
	uint32_t dma1en            :1;
	uint32_t dma2en            :1;
	uint32_t dma2den           :1;
	uint32_t reserved4         :1;
	uint32_t ethmacen          :1;
	uint32_t ethmactxen        :1;
	uint32_t ethmacrxen        :1;
	uint32_t ethmacptpen       :1;
	uint32_t otghsen           :1;
	uint32_t otghsulpien       :1;
	uint32_t reserved5         :1;
}RCC_AHB1ENR_t;

typedef struct {
	uint32_t mode_r0      :2;
	uint32_t mode_r1      :2;
	uint32_t mode_r2      :2;
	uint32_t mode_r3      :2;
	uint32_t mode_r4      :2;
	uint32_t mode_r5      :2;
	uint32_t mode_r6      :2;
	uint32_t mode_r7      :2;
	uint32_t mode_r8      :2;
	uint32_t mode_r9      :2;
	uint32_t mode_r10     :2;
	uint32_t mode_r11     :2;
	uint32_t mode_r12     :2;
	uint32_t mode_r13     :2;
	uint32_t mode_r14     :2;
	uint32_t mode_r15     :2;
}GPIOx_MODER_t;

typedef struct {
	uint32_t odr_0     :1;
	uint32_t odr_1     :1;
	uint32_t odr_2     :1;
	uint32_t odr_3     :1;
	uint32_t odr_4     :1;
	uint32_t odr_5     :1;
	uint32_t odr_6     :1;
	uint32_t odr_7     :1;
	uint32_t odr_8     :1;
	uint32_t odr_9     :1;
	uint32_t odr_10    :1;
	uint32_t odr_11    :1;
	uint32_t odr_12    :1;
	uint32_t odr_13    :1;
	uint32_t odr_14    :1;
	uint32_t odr_15    :1;
	uint32_t resvered  :16;
}GPIOx_ODR_t;


#endif /* MAIN_H_ */
