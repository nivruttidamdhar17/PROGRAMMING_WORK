//Array of pointers
#include<stdio.h>

void main() {

	int x = 10;
	int y = 20;
	int z = 30;

	int* arr[3] = {&x,&y,&z};

	printf("%ld\n",sizeof(arr));

	printf("%p\n",arr[0]);   //0x04
	printf("%p\n",arr[1]);   //0x08
	printf("%p\n",arr[2]);   //0x0c

	printf("%d\n",*(arr[0]));  //10
	printf("%d\n",*(arr[1]));  //20
	printf("%d\n",*(arr[2]));  //30
}
