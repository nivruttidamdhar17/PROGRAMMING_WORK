#include<stdio.h>

//int y = 10;

void fun() {
	
	static int y = 10;    //local static variable
	++y;
	printf("%d\n",y);
}
void main() {

	fun();
	printf("%d\n",y);  //error: undeclared y
	fun();
	printf("%d\n",y);
	fun();
	printf("%d\n",y);
}
