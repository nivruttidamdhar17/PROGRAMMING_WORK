#include<stdio.h>

void main(){

	int x;

	printf("Enter value\n");
	scanf("%d",&x);

	switch(x){
		case 65 :
			printf("Value of x is 65\n");
			break;
		case 'A' :                                //duplicate case error
			printf("Value of x is A\n");
			break;
		case 66 :
			printf("Value of x is 66\n");
			breaku;
		case 'B':                                //duplicate case error
			printf("Value of x is B\n");
			break;
		defalut :
			printf("Default statement\n");

	}
}
