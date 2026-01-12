#include<stdio.h>

struct Demo {

	int jerNo;
	char ch1;
	float avg;
	char ch2;
	char ch3;
	double grade1;
};

void main() {

	struct Demo obj;

	printf("%ld\n",sizeof(obj));               //16
	printf("%ld\n",sizeof(struct Demo));       //16
}
