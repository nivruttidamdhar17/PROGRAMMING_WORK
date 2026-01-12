#include<stdio.h>

void main() {

	fun(10);
	fun('A');
}

void fun(int x) {

	printf("%d\n",x);   //implicit declaration of fun 10 A
}
