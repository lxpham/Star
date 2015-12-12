/*
 * gpio.h
 *
 *  Created on: Dec 12, 2015
 *      Author: WIN7
 */

#ifndef __GPIO_H__
#define __GPIO_H__

#define GPIO_PATH "/sys/class/gpio/"

enum GPIO_DIRECTION{ INPUT, OUTPUT };
enum GPIO_VALUE{ LOW=0, HIGH=1 };
enum GPIO_EDGE{ NONE, RISING, FALLING, BOTH };

int gpio_write(char* path, char *filename, char *value);
int gpio_export(char *path,char *value);
int gpio_unexport(char *path,char *value);

#endif /* __GPIO_H__ */
