#include<stdio.h>

void main() {

	int x = 10;
	char ch = 'A';
	double d = 20.85;

	void* arr[3] = {&x,&ch,&d};

	printf("%p\n",arr[0]);   //0x03
	printf("%p\n",arr[1]);   //0x04
	printf("%p\n",arr[2]);   //0x08

	printf("%d\n",*((int*)(arr[0])));  //10
	printf("%c\n",*((char*)(arr[1])));  //A
	printf("%lf\n",*((double*)(arr[2]))); //20.85000
 
}
