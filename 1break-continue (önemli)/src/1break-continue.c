/*
 ============================================================================
 Name        : 1break-continue.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int toplam = 0;
	int x;
	printf("bir sayı girin bitirmek için -99 yapın");
	scanf("%d",&x);

	while(1){ //

		if(x==-99){
			break;
		}

		if(x<0 || x>100){
			printf("0 ve 100 arasında olmalıdır");
		}

			toplam+=x;
			scanf("%d",&x);
//			continue;

	}
	printf("%d",toplam);



	return EXIT_SUCCESS;
}
