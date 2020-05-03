/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
// çözüm çok önemli
/*int main(void) {
	int h,w,t;
	scanf("%d%d%d",&h,&w,&t);

	int i,j;
   for(i=0;i<h-t;i++){
	   for(j=0;j<t;j++){
		   printf("*");
	   }
	   printf("\n");
   }

   for(i=0;i<t;i++){
	   for(j=0;j<w;j++){
		   printf("*");
	   }
	   printf("\n");
   }


	return EXIT_SUCCESS;
}*/



//kendi denemem

int main(){
	int h,w,t;
	scanf("%d%d%d",&h,&w,&t);

	int i,j;

	for(i=0;i<h;i++){
		for(j=0;j<w;j++){
			if(i>=h-t || (i<h-t && j<h-w-t-1 )){
				printf("*");
			}
	else{
		printf(".");
	}

	}
		printf("\n");
	}
	return 0;
}
































