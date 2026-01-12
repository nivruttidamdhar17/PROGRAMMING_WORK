#include<stdio.h>

void callByAddress(int*);

void main() {

	int x = 10;

	printf("%d\n",x);       //10

	callByAddress(&x);      //0x100

	printf("%d\n",x);
}

void callByAddress(int *ptr) {

	printf("%p\n",ptr);    //0x100
	printf("%d\n",*ptr);   //10
			       
	*ptr = 50;
	
	printf("%d\n",*ptr);
}
