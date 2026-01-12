#include<stdio.h>

void main(){

	int x;
	int rem;

	printf("Enter number :\n");
	scanf("%d",&x);

	rem = x%10;
	printf("%d\n", rem*5);
}
