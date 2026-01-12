#include<stdio.h>

void fun() {

	static int y = 10;   //initalises once
	++y;
	printf("%d\n",y);  //11 12 13
}

void main() {

	fun();
	fun();
	fun();
}
