/*
 * star_define.h
 *
 *  Created on: Oct 19, 2015
 *      Author: lxpham
 *  This header file defines all pins assignment for Star project. It includes:
 *
 *  14 3.3V digital inputs 		GPIO_IN
 *  14 3.3V digital outputs		GPIO_OUT
 *  7 1.8V analog inputs (ADC) 	ADC_IN
 *  1 output for Speaker
 *  1 output for RUN LED
 *  1 output for ERROR LED
 *  5 output for USER_LED
 *  2 pins for I2C (SDA and SCL)
 *  3 pins for RS485
 *  2 pins for UART (RS232)
 */

#ifndef STAR_DEFINE_H_
#define STAR_DEFINE_H_

#include "bbb_define.h"

/*GPIO Input definition*/
#define GPIO_IN_0 		BBB_GPIO2_9
#define GPIO_IN_1 		BBB_GPIO2_11
#define GPIO_IN_2 		BBB_GPIO2_13
#define GPIO_IN_3 		BBB_GPIO2_25
#define GPIO_IN_4 		BBB_GPIO2_24
#define GPIO_IN_5		BBB_GPIO2_29
#define GPIO_IN_6		BBB_GPIO1_1
#define GPIO_IN_7		BBB_GPIO1_5
#define GPIO_IN_8		BBB_GPIO1_31
#define GPIO_IN_9		BBB_GPIO2_1
#define GPIO_IN_10		BBB_GPIO1_14
#define GPIO_IN_11		BBB_GPIO0_26
#define GPIO_IN_12		BBB_GPIO1_12
#define GPIO_IN_13		BBB_GPIO1_3
#define GPIO_IN_14		BBB_GPIO1_7

/*GPIO Output definition*/
#define GPIO_OUT_0		BBB_GPIO2_6
#define GPIO_OUT_1		BBB_GPIO2_8
#define GPIO_OUT_2		BBB_GPIO2_10
#define GPIO_OUT_3		BBB_GPIO2_12
#define GPIO_OUT_4		BBB_GPIO2_23
#define GPIO_OUT_5		BBB_GPIO2_22
#define GPIO_OUT_6		BBB_GPIO1_0
#define GPIO_OUT_7		BBB_GPIO1_4
#define GPIO_OUT_8		BBB_GPIO1_30
#define GPIO_OUT_9		BBB_GPIO0_27
#define GPIO_OUT_10		BBB_GPIO1_15
#define GPIO_OUT_11		BBB_GPIO1_13
#define GPIO_OUT_12		BBB_GPIO1_2
#define GPIO_OUT_13		BBB_GPIO1_6

/*ADC definition*/
#define ADC_IN_0		BBB_AIN0
#define ADC_IN_1		BBB_AIN1
#define ADC_IN_2		BBB_AIN2
#define ADC_IN_3		BBB_AIN3
#define ADC_IN_4		BBB_AIN4
#define ADC_IN_5		BBB_AIN5
#define ADC_IN_6		BBB_AIN6

/*LED definition*/
#define RUN_LED			BBB_GPIO1_28
#define ERROR_LED		BBB_GPIO0_7

#define USER_LED_0		BBB_GPIO0_13 /*MUX to I2C2_SCL*/
#define USER_LED_1		BBB_GPIO0_3
#define USER_LED_2		BBB_GPIO1_17
#define USER_LED_3		BBB_GPIO3_21
#define USER_LED_4		BBB_GPIO3_19

/*I2C definition*/
#define I2C1_SCL		BBB_I2C1_SCL
#define I2C1_SDA		BBB_I2C1_SDA

/*RS485 definition*/
#define RS485_TX		BBB_UART4_TXD
#define RS485_RX		BBB_UART4_RXD
#define RS485_RW		BBB_GPIO1_16

/*RS232 definition*/
#define RS232_TX		BBB_UART1_TXD
#define RS232_RX		BBB_UART1_RXD

/*Speaker definition*/
#define SPEAKER_OUT		BBB_GPIO2_7

#endif /* STAR_DEFINE_H_ */
