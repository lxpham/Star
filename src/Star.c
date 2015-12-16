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

int main(void) {
	puts("Star project"); /* prints Star project */

	gpio_export(GPIO_PATH,"76");
	gpio_export(GPIO_PATH,"27");
	printf("Value %u\n",gpio_get_value("/sys/class/gpio/gpio76/"));
	printf("Direction %u\n",gpio_get_direction("/sys/class/gpio/gpio76/"));
	printf("Edge %u\n",gpio_get_edge("/sys/class/gpio/gpio76/"));
	printf("=====================================\n");
	printf("Value %u\n",gpio_get_value("/sys/class/gpio/gpio27/"));
	printf("Direction %u\n",gpio_get_direction("/sys/class/gpio/gpio27/"));
	printf("Edge %u\n",gpio_get_edge("/sys/class/gpio/gpio27/"));
	return EXIT_SUCCESS;
}
