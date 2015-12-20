/*
 ============================================================================
 Name        : Star.c
 Author      : lxpham
 Version     :
 Copyright   : All rights reserved
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "star_define.h"
#include "gpio.h"
#include "unistd.h"
#include <fcntl.h>



int main(int argc, const char *argv[])
{
	puts("Star project"); /* prints Star project */
	if (argc != 3)
	{
		printf("Usage:\n");
		printf("\tgpioCtl <outPins> <on/off>\n");
		printf("\n");
		printf("<outPins>  : Number between 0 and 14\n");
		printf("<on/off>: 1 = on, 0 = off\n");
		return 1;
	}
	int gpio_out = atoi(argv[1]);
	if (gpio_out < 0 || gpio_out > 14)
	{
		printf("<gpio_out>  : Number between 0-14\n");
	return 1;
	}
	printf("gpio_out: %u\n",gpio_out);

	if(gpio_out == 5){
		printf("GPIO_OUT_5\n");
		char* gpio_child_path = malloc(30);
		gpio_child_path=gpio_export(GPIO_PATH,GPIO_OUT_5);
		gpio_set_direction(gpio_child_path,"out");
		gpio_set_value(gpio_child_path,argv[2]);

	}

	return 0;
}




//
//int main(void) {
//	puts("Star project"); /* prints Star project */
//
//	gpio_export(GPIO_PATH,"71");
//	printf("Value %u\n",gpio_get_value("/sys/class/gpio/gpio71/"));
//	printf("Direction %u\n",gpio_get_direction("/sys/class/gpio/gpio71/"));
//	printf("Edge %u\n",gpio_get_edge("/sys/class/gpio/gpio71/"));
//
//	gpio_set_direction("/sys/class/gpio/gpio71/","out");
//	gpio_set_value("/sys/class/gpio/gpio71/","1");
//	while(1){
//		gpio_set_value("/sys/class/gpio/gpio71/","0");
//		sleep(1);
//		gpio_set_value("/sys/class/gpio/gpio71/","1");
//		sleep(1);
//	}
//
//	return EXIT_SUCCESS;
//}
