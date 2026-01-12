#include<stdio.h>

//void fun(auto int x,auto int y) {   //error 
void fun(static int x,static int y) {  //error

	int a = 10;
	register int b = 30;
	static int c = 40;
	extern int d;
}

void main() {

	fun(10,20);
}
