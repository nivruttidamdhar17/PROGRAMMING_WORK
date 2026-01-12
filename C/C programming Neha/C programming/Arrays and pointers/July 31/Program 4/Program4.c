//copying array 

#include<stdio.h>

void main(){

	int arr1[3] = {10,20,30};

	printf("Array 1:\n");
	for(int i=0;i<3;i++){
	
		printf("%d\n",arr1[i]);
	}

	int arr2[3];

	printf("Array 2:\n");
	for(int i=0;i<3;i++){
	
		arr2[i] = arr1[i];
	}

	for(int i=0;i<3;i++){
		
		printf("%d\n",arr2[i]);
	}
}
