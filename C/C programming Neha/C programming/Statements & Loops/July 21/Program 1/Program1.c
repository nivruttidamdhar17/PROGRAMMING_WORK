#include<stdio.h>

void main(){

	int input;
	int x = 2;
	int y = 3;

	switch(input){
		case 5 :
			printf("5\n");
			break;
		case x + y :
			printf("2+3\n");   //duplicate case error  compulsory compile constant shuf be given
			break;
		case y + x :
			printf("3+2\n");  //dupllicate case error  compulsory compile time constant shud be given
			break;
		default :
			printf("In default\n");
	}
}
