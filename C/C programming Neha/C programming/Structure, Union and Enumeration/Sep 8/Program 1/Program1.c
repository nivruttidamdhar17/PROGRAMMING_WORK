//Passing structure to a function
//  1. call by value(passing structure object)

#include<stdio.h>


struct Demo {

	int x;
	float y;
};
/*
void fun(struct Demo obj) {
	
	printf("%p\n",obj);
}
*/
void main() {

	struct Demo obj = {10,20.5};
	
	printf("%p\n",&obj.x);
	printf("%p\n",obj);
	printf("%p\n",&obj);      //always use call by address to save memory

}
