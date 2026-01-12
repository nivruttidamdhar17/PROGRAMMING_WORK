#include<stdio.h>

void main(){

	int days;

	printf("Enter number of days :\n");
	scanf("%d", &days);

	while(days >= 1){
		printf("%d Days remaining\n",days);
		days--;
	}
	printf("Due date\n");
}
