#include<stdio.h>

void main() {

 	int x = 10;

	printf("%d\n",x);          //10
	printf("%p\n",&x);         //100

	int *ptr = &x;
	printf("%p\n",ptr);        //100
	printf("%p\n",&ptr);   	   //200     
}
