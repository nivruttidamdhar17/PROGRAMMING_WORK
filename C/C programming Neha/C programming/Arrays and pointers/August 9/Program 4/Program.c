//*****
#include<stdio.h>

void main() {

	int arr1[3] = {10,20,30};
	int arr2[3] = {40,50,60};
	
//	int *iparr[] = {&arr1,&arr2};

	int (*ptr1)[3] = &arr1;    //pointer to an array
	int (*ptr2)[3] = &arr2;    //pointer to an array
	
	printf("%d\n",**ptr1);
	printf("%d\n",**ptr2);

	int arr3[2] = {&ptr1,&ptr2}

}
