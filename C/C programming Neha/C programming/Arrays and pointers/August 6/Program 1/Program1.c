#include<stdio.h>

void main() {

	int x =10;

	int *iptr = &x;
	void *vptr = &x;

	printf("%p\n",iptr); //0x100
	printf("%p\n",vptr); //0x107

	printf("%d\n",*iptr);           //10
	//printf("%d\n",*vptr);  //error invalid use of void expression.Dereferencing of void pointer cannot be used.
	printf("%d\n",*((int *)vptr));  //10

}

//if we  want to dereference we have to typecast it.
