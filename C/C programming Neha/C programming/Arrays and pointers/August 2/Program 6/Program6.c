#include<stdio.h>

void main() {

	int x = 10;
	int y = 20;

	int *ptr1 = &x;
	int *ptr2 = &y;

	printf("%p\n",ptr1);   //0x100
	printf("%p\n",ptr2);   //0x104


	printf("%d\n",*ptr1);  //10
	printf("%d\n",*ptr2);  //20
	
	printf("End main\n");

}
