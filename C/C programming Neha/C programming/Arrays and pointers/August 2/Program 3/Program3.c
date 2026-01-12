#include<stdio.h>

void main() {

	int x = 10;

	int *ptr1 = &x;
	int *ptr2 = x;

	printf("%p\n",ptr1);     //100
	printf("%p\n",ptr2);    //0xa  10
}
