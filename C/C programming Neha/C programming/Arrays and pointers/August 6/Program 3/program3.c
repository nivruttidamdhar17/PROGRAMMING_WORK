#include<stdio.h>

void main() {

	int x = 10;

	printf("%d\n",x);  //10

	int *iptr = &x;

	printf("%d\n",*iptr);  //10

	*iptr = *iptr;

     	printf("%d\n",*iptr);  //30
 
}
