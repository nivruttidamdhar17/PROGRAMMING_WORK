#include<stdio.h>

void main(){
	float salary;

	printf("Enter salary :\n");
	scanf("%f",&salary);
	printf("%f\n", salary);

	if(salary > 0 && salary <= 500000){
		printf("0% Tax applied\n");
	}
	else if(salary > 500000 && salary <= 100000){
		printf("10% Tax applied\n");	
	}
	else if(salary > 100000 && salary <= 1500000){
		printf("20% Tax applied\n");
	}
	else if(salary > 1500000 && salary <= 200000){
		printf("30% Tax applied\n");
	}
	else if(salary > 200000){
		printf("40% Tax applied\n");
	}
	else{
		printf("Invalid entry");
	}
}
