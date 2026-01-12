#include<stdio.h>

void main() {

	int x = 10;
	int y = 20;

	int *ptr1 = &x;
	int *ptr2 = &y;

	printf("%d\n",*ptr1+*ptr2);  //30
	printf("%p\n",ptr1+ptr2);    //error: invalid operands to binary(cannot add two address)

	printf("%p\n",&ptr1);  
	printf("%p\n",&ptr2);  
}
