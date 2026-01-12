#include<stdio.h>

void main(){ 

	int x = 10,20,30;
	printf("%p\n",&x);
	
	int y = {10,20,30};
	printf("%p\n",&y);

	int z = (10,20,30);
	printf("%p\n",&z);
}
