/*
 * gpio.h
 *
 *  Created on: Dec 12, 2015
 *      Author: WIN7
 */

#ifndef __GPIO_H__
#define __GPIO_H__

#define GPIO_PATH "/sys/class/gpio/"

typedef enum GPIO_DIRECTION{ INPUT, OUTPUT } GPIO_DIRECTION;
typedef enum GPIO_VALUE{ LOW=0, HIGH=1 } GPIO_VALUE;
typedef enum GPIO_EDGE{ NONE, RISING, FALLING, BOTH } GPIO_EDGE;

int gpio_write(char* path, char *filename, char *value);
char* gpio_read(char *path, char *filename);
char* gpio_export(char *path,int value);
int gpio_unexport(char *path,int value);
GPIO_VALUE gpio_get_value(char *path);
int gpio_set_value (char *path, char *value);
GPIO_DIRECTION gpio_get_direction(char *path);
int gpio_set_direction(char *path, char* value);
GPIO_EDGE gpio_get_edge(char *path);
#endif /* __GPIO_H__ */
