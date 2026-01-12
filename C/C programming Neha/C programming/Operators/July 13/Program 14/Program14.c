#include<stdio.h>

void main(){
		
	int a = 10;
	printf("a=%d\n",a);
	printf("%p\n", &a);

	int x = {10,20,30};
	printf("x=%d\n", x);
	printf("%p\n", &x);

	int y = (10,20,30);
	printf("y=%d\n", y);
	printf("%p\n", &y);
}
