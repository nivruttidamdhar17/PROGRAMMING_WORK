#include<stdio.h>

void add(int a,int b) {

	printf("%d\n",a+b);
}
void sub(int a,int b) {

	printf("%d\n",a-b);
}

void main() {

	void (*ptr)(int,int);     //array = int(*ptr)[] hence for function we use ()

	ptr = add;
	ptr(10,20);

	ptr = sub;
	ptr(30,10);
}
