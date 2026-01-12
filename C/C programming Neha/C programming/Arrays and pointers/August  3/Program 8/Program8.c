//Subtraction of pointer
#include<stdio.h>

void main() {

	int arr[] = {10,20,30,40};

	int *ptr1 = &(arr[1]);
	printf("%d\n",*ptr1);  //20

	printf("%d\n",*(ptr1+2)); //40
}
