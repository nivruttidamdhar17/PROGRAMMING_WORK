#include<stdio.h>

int x = 10;                  //Global variable initialised
int y;                       //Global variable declared

void office(){
	int a = 50;         //Local variable
	printf("In office - Nusta coding...\n");
}
void main(){

	printf("Wake-up\n");
	office();            //Function call
	printf("Sleep\n");
}
