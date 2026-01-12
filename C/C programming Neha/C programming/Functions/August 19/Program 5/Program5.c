#include<stdio.h>

int sumDiagonal(int **ptr,int arrSize) {

	int sum = 0;

	for(int i=0;i<arrSize;i+=3) {
	
		sum = sum + *(*ptr+i);
	}
	return sum;
}

void main() {

	int arr[3][3] = {1,2,3,4,5,6,7,8,9};

	int arrSize = sizeof(arr)/sizeof(int);

	int sum = sumDiagonal(arr,arrSize);

	printf("Sum of diagonal is %d\n",sum);
}
