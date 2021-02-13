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
	uint32_t bkpsram_en        :1;
	uint32_t reserved3         :1;
	uint32_t ccmdat_aramen     :1;
	uint32_t dma1_en           :1;
	uint32_t dma2_en           :1;
	uint32_t dma2d_en          :1;
	uint32_t reserved4         :1;
	uint32_t eth_mac_en        :1;
	uint32_t eth_mactx_en      :1;
	uint32_t eth_macrx_en      :1;
	uint32_t eth_macptp_en     :1;
	uint32_t otghs_en          :1;
	uint32_t otghsulpi_en      :1;
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
	uint32_t pin_0     :1;
	uint32_t pin_1     :1;
	uint32_t pin_2     :1;
	uint32_t pin_3     :1;
	uint32_t pin_4     :1;
	uint32_t pin_5     :1;
	uint32_t pin_6     :1;
	uint32_t pin_7     :1;
	uint32_t pin_8     :1;
	uint32_t pin_9     :1;
	uint32_t pin_10    :1;
	uint32_t pin_11    :1;
	uint32_t pin_12    :1;
	uint32_t pin_13    :1;
	uint32_t pin_14    :1;
	uint32_t pin_15    :1;
	uint32_t reserved  :16;
}GPIOx_ODR_t;

enum {
	CLK_OFF = 0x00,
	CLK_ON = 0x01,
	IN = 0x00,
	OUT = 0x01,
	ALT = 0x02,
	ANAL = 0x03,
	LOW = 0x00,
	HIGH = 0x01
};

enum {
	FALSE = 0x00,
	TRUE = 0x01
};

#endif /* MAIN_H_ */
