#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Employee {

	int empId;
	char empName[20];
	float sal;
	struct Employee *next;
}Emp;

void accessData(Emp *ptr) {

	printf("%d\n",ptr->empId);
	printf("%s\n",ptr->empName);
	printf("%f\n",ptr->sal);
	printf("%p\n",ptr->next);
}

void main() {

	Emp *emp1 = (Emp*)malloc(sizeof(Emp)); 

	Emp *emp2 = (Emp*)malloc(sizeof(Emp)); 

	Emp *emp3 = (Emp*)malloc(sizeof(Emp)); 
	
	emp1->empId = 1;
	strcpy(emp1->empName,"Kanha");
	emp1->sal = 50.00;
	emp1->next = emp2;
	
	emp2->empId = 2;
	strcpy(emp2->empName,"Ashish");
	emp2->sal = 60.00;
	emp2->next = emp3;

	emp3->empId = 3;
	strcpy(emp3->empName,"Rahul");
	emp3->sal = 70.00;
	emp3->next = NULL;

	accessData(emp1);
	accessData(emp2);
	accessData(emp3);
}
