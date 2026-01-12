//Function like macro

#include<stdio.h>

#define add(a,b) a+b
# define sqr(x) x*x

void main() {

	int x = 10;
	int y = 20;
	printf("%d\n",add(x,y));	
	printf("%d\n",sqr(x));	
}

