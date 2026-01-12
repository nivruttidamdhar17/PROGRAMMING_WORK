//Pointer to an array
#include<stdio.h>

void main() {

	int arr[5] = {10,20,30,40,50};

	int *ptr1 = arr;

	int (*ptr2)[5] = &arr;

     	printf("%d\n",*ptr1);  //10
 
	printf("%d\n",**ptr2);  //10
	printf("%p\n",*ptr2);  //address 0x100
}
