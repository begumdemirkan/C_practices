/*
 ============================================================================
 Name        : grade.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*int main(void) {

	int grade;
	scanf("%d",&grade);

	if (grade>=90 && grade<=100){
	printf("A");
	}
	else if (grade>=80 && grade<90){
		printf("B");
	}
	else if (grade>=60 && grade<80){
		printf("C");
	}
    else if (grade>=40 && grade<60){
    	printf("D");
    }
    	else{
    		printf("F");

    	}


	return EXIT_SUCCESS;
}*/


//kendi denemem

int main(){
	int not;
	scanf("%d",&not);
	if(not<=100){
	if(not>=90 && not<=100){
		printf("A");
	}

	else if(not>=75 && not<90){
			printf("B");
		}

	else if(not>=60 && not<75){
			printf("C");
		}

	else if(not>=50 && not<60){
				printf("D");
			}
	else{
		printf("F");
	}
	}

	else{
		printf("wrong input");
	}


	return 0;
}



















