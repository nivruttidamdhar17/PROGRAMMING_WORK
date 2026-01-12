#include<stdio.h>

void main(){

	int input;

	printf("Enter number\n");
	scanf("%d",&input);

	switch(input){
		case 10%5==0 :
			printf("5\n");
			break;
		case 6 :
			printf("6\n");
			break;
		case 7 :
			printf("7\n");
			break;
		default :
			printf("in default\n");
	}
}
