#include<stdio.h>

void fun(int *x) {
	
	printf("%p\n",x);
}

void main() {

	int a = 10;
	
	fun(a);      //0xa  warning: passing arguement of 'fun' makes pointer from integer without a cast
	fun(&a);
}
