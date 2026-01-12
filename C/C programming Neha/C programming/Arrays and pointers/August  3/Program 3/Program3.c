#include<stdio.h>

void main() {

	char x = 'A';
	char y = 'B';

	char *ptr1 = &x;
	char *ptr2 = &y;

	printf("%d\n",*ptr1+*ptr2);  //131 assci value 
	//printf("%p\n",ptr1+ptr2);  //ERROR
}
