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

/*Export GPIO number and return fullpath of that GPIO pin*/
char* gpio_export(char *path,int value){

	char str[20];
	sprintf(str,"%d",value);
	gpio_write(path,"export",str);
	char *full_path;
	full_path = malloc(strlen(path)+strlen("gpio")+strlen(str)+1);
	strcpy(full_path,path);
	strcat(full_path,"gpio");
	strcat(full_path,str);
	strcat(full_path,"/");
	printf("%s\n",full_path);
	return full_path;
}

int gpio_unexport(char *path,int value){
	char str[20];
	sprintf(str,"%d",value);
	gpio_write(path,"unexport",str);
	return 0;
}

GPIO_VALUE gpio_get_value(char *path){
	if(!strncmp(gpio_read(path,"value"),"0",1)) return LOW;
	else return HIGH;
}

int gpio_set_value (char *path, char *value){
	gpio_write(path,"value",value);
	return 0;
}
GPIO_DIRECTION gpio_get_direction(char *path){
	if(!strncmp(gpio_read(path,"direction"),"in",2)) return INPUT;
	else return OUTPUT;
}

int gpio_set_direction(char *path, char* value){
	gpio_write(path,"direction",value);
	return 0;
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




