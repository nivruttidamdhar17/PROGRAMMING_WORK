#include<stdio.h>

void main(){
	
	int x;
	int rem;

	printf("Enter number:\n");
	scanf("%d",&x);

	while(x != 0){
		rem = x%10;
		printf("%d", rem);
		x=x/10;
	}
}
