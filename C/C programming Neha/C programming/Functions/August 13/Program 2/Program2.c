#include<stdio.h>

void funarr(int* arr) {

	printf("%p\n",arr);    //0x04
}
void main() {

	int arr1[] = {10,20,30,40};

	funarr(arr1);

	funarr(&arr1[1]);
}
