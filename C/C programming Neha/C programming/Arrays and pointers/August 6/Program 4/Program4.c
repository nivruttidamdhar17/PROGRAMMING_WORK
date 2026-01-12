#include<stdio.h>

void main() {

	int arr[] = {10,20,30,40,50};

	int *iptr = &(arr[0]);

	printf("%d\n",*iptr);    //10

	*iptr++;                 //iptr = 11

	*iptr = 70;              //70

	for(int i=0;i<5;i++){
	
		printf("%d\n",arr[i]);
	}
}
