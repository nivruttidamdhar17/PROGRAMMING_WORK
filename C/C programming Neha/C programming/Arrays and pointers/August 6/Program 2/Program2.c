//Wild pointer and Null poninter
#include<stdio.h>

void main() {

	int x = 10;
	/*
	//wild pointer
	int *iptr;            //can have garbage value or 0, hence address can go out of process

	printf("%d\n",*iptr);  //segmentation fault(core dumped)
	*/

	int *iptr = NULL;   //or 0 NULL pointer

	printf("%d\n",*iptr);   //segmentation fault
}

