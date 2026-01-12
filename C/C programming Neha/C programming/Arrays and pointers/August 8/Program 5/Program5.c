#include<stdio.h>

void main() {

	int arr[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};

	printf("%p\n",*(*(arr[1])));
}
