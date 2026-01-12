//dereferencing of a pointer (pointer la konacha tri reference dene)

#include<stdio.h>

void main() {

	int x = 10;

	int *ptr1 = &x;    //pointer
	
	printf("%p\n",ptr1);
	printf("%d\n",*ptr1);   //address madhlya data cha access ghene  == 10, value of operator 
}

//*ptr1 = &x; means it stores the address of int x but *ptr1 gives the data in the int x i.e 10

