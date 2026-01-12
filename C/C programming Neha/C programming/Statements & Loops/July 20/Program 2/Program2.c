#include<stdio.h>

void main(){

	char x;

	printf("Enter value :\n");
	scanf("%c",&x);

	switch(x){
		case 65 :
			printf("value of x is 65\n");
			break;
		case 66 :
			printf("Value of x is 66\n");
			break;
		case 67 :
			printf("value pf x is 67\n");
			break;
		case 68 :
			printf("value of x is 68\n");
			break;
		default :
			printf("Wrong ip\n");
	}
}
