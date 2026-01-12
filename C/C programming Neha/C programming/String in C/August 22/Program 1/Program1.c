
#include<stdio.h>

int* fun (int x,int y) {

	printf("%d\n",x+y);
	int val;
	val = x+y;

	printf("%p\n",&val);
	return &val;
}
void main() {

	int *ptr = fun(10,20);
	printf("%p\n",ptr);
	printf("%d\n",*ptr);   //nil stack frame geli tri data access krtoy 
}
