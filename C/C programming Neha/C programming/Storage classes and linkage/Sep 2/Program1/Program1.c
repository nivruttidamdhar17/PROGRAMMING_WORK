#include<stdio.h>

int a = 10;

void fun(int x) {

	int y = 20;

	printf("%d%d",x,y);
}

void gun() {

	char *str = "Core2web";
	printf("%s\n",str);
}

void main() {

	int b = 30;
	fun(10);
	gun();
}
