#include<stdio.h>

void main() {

	int arr1[3] = {1,2,3,4};

	int arr[][3] = {{1,2,3,4},{5,6},{7,8,9}};

	printf("%d\n",arr1[3]);        
	printf("%d\n",arr[0][3]);
}
