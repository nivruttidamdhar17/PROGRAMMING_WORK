#include<stdio.h>

void main() {

	extern int x;   //dusrya file madhlya x la access kru shkto extern
	printf("%d\n",x);
}

//static int x = 80;   error : static declaraton of x follows non static declaration
int x = 80;
