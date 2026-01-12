#include<stdio.h>

void main() {

	int arr1[4] = {10,20,30,40};
	int arr2[4] = {50,60,70,80};
	int arr3[4] = {90,100,110,120};

	int *aptr[3] = {arr1,arr2,arr3};

	int (*ptr1[3])[4] = {&arr1,&arr2,&arr3};  //pointer to an array cha array [3] = list of array & [4] = elements in array
}
