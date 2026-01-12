//malloc add()
#include<stdio.h>

void* malloc(size_t size);   //prototype of malloc

int mallocAdd() {

	int *ptr1 = (int *)malloc(sizeof(int));
	int *ptr2 = (int *)malloc(sizeof(int));

	*ptr1 = 10;
	*ptr2 = 20;

	return *ptr1+*ptr2;
}
void main() {

	int x = mallocAdd();
	printf("%d\n",x);              //30
}
