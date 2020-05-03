/*
 ============================================================================
 Name        : mid1.c
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
	scanf("%d",&number);
	int sum=0;

 while(number>=0){
	 if(number%2==1){
		 sum+=number;
	 }
	 scanf("%d",&number);
 }
 printf("%d",sum);
	return EXIT_SUCCESS;
}*/


//kendi denemem

int main(){

	int a;
	scanf("%d",&a);
	int sum=0;

	while(a>0){
		if(a%2==1){
		sum=sum+a;

	}
		scanf("%d",&a);

}
	printf("%d",sum);
	return 0;
}
















