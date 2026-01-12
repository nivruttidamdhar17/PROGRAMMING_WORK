#include<stdio.h>

struct Demo {

	int x:1;
	int y;
};

void main() {

	struct Demo obj = {5,15};

	printf("%d\n",obj.x);
	printf("%d\n",obj.y);

	//printf("%ld\n",sizeof(struct Demo));
}
