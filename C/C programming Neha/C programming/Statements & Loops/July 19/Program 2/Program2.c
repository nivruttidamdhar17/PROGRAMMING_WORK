#include<stdio.h>

void main(){
	
	int x;
	printf("Enter number between 1-5\n");
	scanf("%d",&x);

	switch(x){                            //only int and character expression is allowed
		case 1 :
			printf("One\n");
			break;
		case 2 :
			printf("Two\n");
			break;
		case 3 :
			printf("Three\n");
			break;
		case 4 :
			printf("Four\n");
			break;
		case 5 :
			printf("Five\n");
			break;
		default :
			printf("Wrong input\n");
	}
}
