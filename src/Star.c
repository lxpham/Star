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

	return EXIT_SUCCESS;
}
