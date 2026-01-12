#include<stdio.h>

void main() {

	int arr[2][3][3] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};

	printf("%p\n",&arr);
	printf("%p\n",arr);
	printf("%p\n",arr[0]);
	printf("%p\n",arr[1]);
	printf("%p\n",&arr[0]);
	printf("%p\n",&arr[1]);
	printf("%p\n",&arr[0][0]);

	printf("%d\n",*(*(*(arr+0)+1)+1));//5
	printf("%d\n",*(*(*(arr+1)+2)+1));//17
	printf("%d\n",*(*(*(arr+1)+1)+2));//15
} 
