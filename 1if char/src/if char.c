/*
 ============================================================================
 Name        : if.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*int main(void) {
	char letter;
    scanf("%c",&letter);
    int gap='A'-'a';


		if (letter>='A' && letter<='Z'){
			letter=letter-gap;
			printf("%c", letter);
		}

		else if (letter>='a' && letter<='z'){
			letter=letter+gap;
			printf("%c",letter);
		}

		else{
			printf("wrong input");
		}

		return EXIT_SUCCESS;
}*/

//kendi denemem

int main(){
	char harf;
	scanf("%c",&harf);
	int gap='b'-'B';

	if(harf>='A' && harf<='Z'){
		int result=harf+gap;
		printf("%c",result);
	}

	else if(harf>='a' && harf<='z'){
		char result=harf-gap;
		printf("%c",result);
	}

	else{
		printf("yanlış değer girdiniz. Lütfen harf giriniz.");
	}
	return 0;
}
























