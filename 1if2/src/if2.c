/*
 ============================================================================
 Name        : if2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*int main(void) {
	int a,b;
	a=9;
	b=8;

	if((a==10 && b==8) ||(a==6 && b==8)){
		printf("a is equal to :%d",a);

	}
	else{
		printf("b is equal to: %d",b);
	}
	return EXIT_SUCCESS;
}*/

//kendi denemem

int main(){
	int a,b;
	scanf("%d%d",&a,&b);

	if((a==2 && b==3)||(a==93 && b==97)){
		printf("en büyük veya en küçük 2 asal sayıyı buldunuz tebrikler");
	}

	else if((a==2 && b!=3)||(a==93 && b!=97)){
		printf("ikinci girdiğin sayı hatalı ama ilk girdiğin doğru");
	}

	else if((a!=2 && b==3)||(a!=93 && b==97)){
			printf("ilk girdiğin sayı hatalı ama ikinci girdiğin doğru");
		}

	else{
		printf("tekrar dene başarabilirsin");
	}
}



















