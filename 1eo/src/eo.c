/*
 ============================================================================
 Name        : eo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
// 3 tane sayı çift mi tek mi yaz

/*int main(void) {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);

	if(a%2==0){

	printf("even " ,a);
	}
	else{
		printf("odd ",a);
	}

	if(b%2==0){

	printf("even ",b);
	}
	else{
		printf("odd ",b);
	}

	if(c%2==0){
		printf("even ",c);

	}
	else{
		printf("odd",c);
	}




	return EXIT_SUCCESS;
}*/


//kendi denemem

int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);

	if(a%2==0){
		printf("çift   ");
	}

	else{
		printf("tek  ");
	}

	if(b%2==0){
			printf("çift   ");
		}

		else{
			printf("tek   ");
		}

	if(c%2==0){
			printf("çift   ");
		}

		else{
			printf("tek  ");
		}
	return 0;
}



















