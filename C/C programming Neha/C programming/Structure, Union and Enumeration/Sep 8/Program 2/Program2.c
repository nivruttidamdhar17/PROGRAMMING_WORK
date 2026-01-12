#include<stdio.h>

struct Demo {

	int x;
	float y;
};

void fun(struct Demo obj) {

	printf("%d\n",obj.x);
	printf("%f\n",obj.y);
}

void gun(struct Demo *ptr) {

	printf("%d\n",ptr->x);
	printf("%f\n",(*ptr).y);
}

void main() {

	struct Demo obj = {10,20.60};

	fun(obj);    //passing object to a funtion
	gun(&obj);   //passing address of object to a function
}
