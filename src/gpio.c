/*
 * gpio.c
 *
 *  Created on: Dec 12, 2015
 *      Author: lxpham
 *
 *      This contains GPIO functions
 */

#include "gpio.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int gpio_write(char *path, char *filename, char *value){
	FILE *fp;
	char *full_path = malloc(strlen(path)+strlen(filename)+1);
	strcpy(full_path,path);
	strcat(full_path,filename);
	printf("%s\n",full_path);
	fp = fopen(full_path, "w");
	fputs(value,fp);
	fclose(fp);
	free(full_path);
	return 0;
}

char* gpio_read(char *path, char *filename){
	FILE *fp;
	char *full_path = malloc(strlen(path)+strlen(filename)+1);
	char buff[10];
	strcpy(full_path,path);
	strcat(full_path,filename);
	printf("%s\n",full_path);
	fp = fopen(full_path, "r");
	fscanf(fp, "%s", buff);
	printf("%s\n",buff);
	fclose(fp);
	free(full_path);
	return buff;
}


int gpio_export(char *path,char *value){
	gpio_write(path,"export",value);
	return 0;
}

int gpio_unexport(char *path,char *value){
	gpio_write(path,"unexport",value);
	return 0;
}

GPIO_VALUE gpio_get_value(char *path){
	if(!strncmp(gpio_read(path,"value"),"0",1)) return LOW;
	else return HIGH;
}
GPIO_DIRECTION gpio_get_direction(char *path){
	if(!strncmp(gpio_read(path,"direction"),"in",2)) return INPUT;
	else return OUTPUT;
}

GPIO_EDGE gpio_get_edge(char *path){
	char *tmp;
	tmp =malloc(10);
	tmp = gpio_read(path,"edge");
	if(!strncmp(tmp,"none",4)) return NONE;
	else if(!strncmp(tmp,"rising",6)) return RISING;
	else if(!strncmp(tmp,"falling",7)) return FALLING;
	else return BOTH;
}
