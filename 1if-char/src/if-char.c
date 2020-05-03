/*
 ============================================================================
 Name        : if-char.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/*
	 * write a program that takes a letter from the user
	 * and if its lowercase, prints its uppercase;
	 * if its uppercase prints its lowercase.
	 * uppercase letter:>=65, <=90
	 * lowercase letter:>=97, <=122.
	 */

    /* char letter;

     scanf("%c", &letter);

     if (letter>=65 && letter<=90){
    	 letter=letter+32;
    	 printf("%c", letter);
     }

    	 else if(letter>=97 && letter<=122){
    		 letter=letter-32;
    		 printf("%c",letter);
    }

    	 else{
    		 printf ("wrong");
    	 }

  return EXIT_SUCCESS;

}*/

	//kendi denemem

	char harf;
	scanf("%c", &harf);

	if(harf>=65 && harf<=90){
		char result=harf+32;
		printf("%c",result);
	}
	else if(harf>=97 && harf<=122){
			char result=harf-32;
			printf("%c",result);
		}
	else{
		printf("wrong input");
	}

	return 0;
}



















