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

int gpio_export(char *path,char *value){
	gpio_write(path,"export",value);
	return 0;
}

int gpio_unexport(char *path,char *value){
	gpio_write(path,"unexport",value);
	return 0;
}

