#include<stdio.h>

void main(){
	
	int x;

	printf("Enter number\n");
	scanf("%d", &x);

	if(x % 2 == 0){
		printf("%d divisile by 2\n",x);
	}
	else{
		printf("%d not divisible by 2\n",x);
	}
	

}
