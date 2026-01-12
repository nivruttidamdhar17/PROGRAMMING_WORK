#include<stdio.h>
#include<stdlib.h>

void danglingPtr(int x) {

	int *ptr1 = (int *)malloc(sizeof(int));
	int *ptr2 = NULL;

	//printf("%d\n",*ptr2);   //segmentaton fault
	printf("%p\n",ptr2);   //nill
}

void main() {

	danglingPtr(20);
}





