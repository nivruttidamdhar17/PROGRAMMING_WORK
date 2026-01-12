#include<stdio.h>

void gun();
void fun();

void main() {

	extern int x;

	gun();
	fun();

	printf("%d\n",x);
}
