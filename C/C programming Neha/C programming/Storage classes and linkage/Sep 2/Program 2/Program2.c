#include<stdio.h>
#include<stdlib.h>

void fun() {

	int x = 10;

	int *ptr = (int *)malloc(sizeof(int));

	*ptr = 50;
	printf("%d\n",*ptr);
	free(ptr);
}

void main() {

	fun();
}

//we can also write prototype as 

