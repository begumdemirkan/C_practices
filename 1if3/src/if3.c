/*
 ============================================================================
 Name        : if3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b;
	a=5;
	b=8;
	if (a==10){
		printf ("a is equal to: %d,",a);
	}
	else if(a>5){
			printf("hello world");
	}
	else if (a==5){
		printf("ne");

	}

	return EXIT_SUCCESS;
}


