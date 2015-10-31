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
#define GPIO_IN_0 		BBB_GPIO0_23  /*P8_13*/
#define GPIO_IN_1 		BBB_GPIO1_14  /*P8_16*/
#define GPIO_IN_2 		BBB_GPIO1_15  /*P8_15*/
#define GPIO_IN_3 		BBB_GPIO2_1   /*P8_18*/
#define GPIO_IN_4 		BBB_GPIO2_3   /*P8_8*/
#define GPIO_IN_5		  BBB_GPIO2_2   /*P8_7*/
#define GPIO_IN_6		  BBB_GPIO2_4   /*P8_10*/
#define GPIO_IN_7		  BBB_GPIO2_5   /*P8_9*/
#define GPIO_IN_8		  BBB_GPIO0_27  /*P8_17*/
#define GPIO_IN_9		  BBB_GPIO0_22  /*P8_19*/   
#define GPIO_IN_10		BBB_GPIO1_29  /*P8_26*/
#define GPIO_IN_11		BBB_GPIO2_24  /*P8_28*/
#define GPIO_IN_12		BBB_GPIO1_12  /*P8_12*/
#define GPIO_IN_13		BBB_GPIO1_13  /*P8_13*/ 
#define GPIO_IN_14		BBB_GPIO0_26  /*P8_14*/   

/*GPIO Output definition*/
#define GPIO_OUT_0		BBB_GPIO2_11  /*P8_42*/
#define GPIO_OUT_1		BBB_GPIO2_10  /*P8_41*/
#define GPIO_OUT_2		BBB_GPIO2_13  /*P8_40*/
#define GPIO_OUT_3		BBB_GPIO2_12  /*P8_39*/
#define GPIO_OUT_4		BBB_GPIO2_23  /*P8_29*/
#define GPIO_OUT_5		BBB_GPIO2_25  /*P8_30*/
#define GPIO_OUT_6		BBB_GPIO2_22  /*P8_27*/
#define GPIO_OUT_7		BBB_GPIO2_7   /*P8_46*/
#define GPIO_OUT_8		BBB_GPIO2_6   /*P8_45*/
#define GPIO_OUT_9		BBB_GPIO2_9   /*P8_44*/
#define GPIO_OUT_10		BBB_GPIO2_8   /*P8_43*/
#define GPIO_OUT_11		BBB_GPIO0_9   /*P8_33*/
#define GPIO_OUT_12		BBB_GPIO2_17  /*P8_34*/
#define GPIO_OUT_13		BBB_GPIO0_10  /*P8_31*/

/*ADC definition*/
#define ADC_IN_0		BBB_AIN0        /*P9_39*/
#define ADC_IN_1		BBB_AIN1        /*P9_40*/
#define ADC_IN_2		BBB_AIN2        /*P9_37*/
#define ADC_IN_3		BBB_AIN3        /*P9_38*/
#define ADC_IN_4		BBB_AIN4        /*P9_35*/
#define ADC_IN_5		BBB_AIN5        /*P9_36*/
#define ADC_IN_6		BBB_AIN6        /*P9_33*/

/*LED definition*/
#define RUN_LED			  BBB_GPIO0_7     /*P9_42*/   
#define ERROR_LED		  BBB_GPIO3_19    /*P9_27*/

#define USER_LED_0		BBB_GPIO3_21    /*P9_25*/       
#define USER_LED_1		BBB_GPIO1_17    /*P9_23*/
#define USER_LED_2		BBB_GPIO0_3     /*P9_21*/ /*Mux with UART2_TXD*/  
#define USER_LED_3		BBB_GPIO0_13    /*P9_19*/ /*Mux with I2C2_SCL*/
#define USER_LED_4		BBB_GPIO1_28    /*P9_12*/

/*I2C definition*/
#define I2C1_SCL		BBB_I2C1_SCL    /*P9_17*/
#define I2C1_SDA		BBB_I2C1_SDA    /*P9_18*/
  
/*RS485 definition*/
#define RS485_TX		BBB_UART1_TXD   /*P9_24*/
#define RS485_RX		BBB_UART1_RXD   /*P9_26*/
#define RS485_RW		BBB_GPIO1_16    /*P9_15*/

/*RS232 definition*/
#define RS232_TX		BBB_UART4_TXD   /*P9_13*/
#define RS232_RX		BBB_UART4_RXD   /*P9_11*/

/*Speaker definition*/
#define SPEAKER_OUT		BBB_GPIO0_11  /*P8_32*/

#endif /* STAR_DEFINE_H_ */
