/*
 ============================================================================
 Name        : while2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

		int number;
		scanf("%d", &number);

		while(number>=0){
			printf("%d\n",number);
			scanf("%d",&number);
		}
		//printf("%d\n",number); döngünün dışını yazıyor.

	return EXIT_SUCCESS;
}
