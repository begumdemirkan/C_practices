/*
 ============================================================================
 Name        : 1area.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main(void) {
	int r;
	scanf("%d", &r);

	float result = r * r * PI;
	printf("result=%f", result);
	return EXIT_SUCCESS;
}
