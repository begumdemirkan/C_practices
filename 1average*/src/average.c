/*
 ============================================================================
 Name        : average.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/*int a,b,c;
	float average;
	int max,min,median;
	scanf("%d%d%d",&a,&b,&c);

	average=(a+b+c)/3.0;

	if(a>b && a>c){
		max=a;
	}
	else if(b>a && b>c){
		max=b;
	}
	else{
		max=c;
	}

	if(a<b && a<c){
		min=a;
	}
	else if(b<a && b<c){
		min=b;
	}
	else{
		min=c;
	}
	if((max==a && min==b)||(max==b && min==a)){
			median=c;
		}
	else if((max==b && min==c)||(max==c && min==b)){
		median=a;
	}

	else{
		median=b;
	}

	printf("average: %f\n", average);
	printf("max:%d\n",max);
	printf("min:%d\n", min);
	printf("median:%d\n",median);

	return EXIT_SUCCESS;
}*/

	//kendi denemem

	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	float average;
	average=(a+b+c)/3.0;// 3 yazınca int kabul ediyor.
	int max,min,medium;

	if(a<b && b<c){
		min=a;
		medium=b;
		max=c;
	}

	else if(a<c && c<b){
			min=a;
			medium=c;
			max=b;
		}

	else if(b<c && b<a){
				min=b;
				medium=c;
				max=a;
			}

	else if(b<a && a<c){
		min=b;
		medium=a;
		max=c;
	}

	else if(c<a && a<b){
			min=c;
			medium=a;
			max=b;
		}

	else{
		min=c;
		medium=b;
		max=a;
	}

	printf(" average:%f\n min:%d\n medium:%d\n max:%d\n",average,min,medium,max);






	return 0;
}
































