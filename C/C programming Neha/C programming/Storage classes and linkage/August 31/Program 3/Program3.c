//local variable
#include<stdio.h>

void fun() {

	int y = 10;

	++y;

	printf("%d\n",y);  //11  11  11
}
void main() {

	fun();
	fun();
	fun();
}
