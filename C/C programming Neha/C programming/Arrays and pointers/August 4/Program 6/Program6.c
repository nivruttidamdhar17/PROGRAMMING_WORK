#include<stdio.h>

void main() {

	int arr[] = {10,20,30,40,50};

	int *ptr = &(arr[0]);

	printf("%p\n",ptr);       //0x100

	printf("%d\n",(*ptr++));   //10
	printf("%d\n",(*ptr++));   //20

	printf("%p\n",ptr);         //0x108

	printf("%d\n",((*ptr)++));  //30 value
	printf("%d\n",((*ptr)++));  //31 value++
}
