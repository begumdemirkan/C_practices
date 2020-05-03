/*
 ============================================================================
 Name        : while3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*int main(void) {
	int number;
	float avg;

	scanf("%d" ,&number);

	int sum=0;
	int count=0;


	while(number>=0){
		sum+=number;
		count++;
		scanf("%d",&number);
	}
	avg=sum/(float) count;
	printf("average=%f",avg);
	return EXIT_SUCCESS;
}*/


//kendi denemem

int main(){
	int n;
	scanf("%d",&n);
	int count=0;
	int sum=0;
	while(n>=0){
		sum=sum+n;
		count++;
		scanf("%d",&n);
	}
	float result=sum/count;
	printf("%f", result);

	return 0;

}





















