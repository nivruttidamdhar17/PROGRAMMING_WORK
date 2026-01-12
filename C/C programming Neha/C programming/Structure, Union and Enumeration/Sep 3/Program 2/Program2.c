#include<stdio.h>

struct Demo {

	float f1;
	char *ch1;
	int x;
	char *ch2;
	int y;
};

void main() {
	
	printf("%ld\n",sizeof(struct Demo));
}
