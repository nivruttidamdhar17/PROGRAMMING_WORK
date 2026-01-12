#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Employee {

	int empId;
	char empName[20];
	float sal;
	struct Employee *next;
}Emp;

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

	//Access

	printf("%d\n",emp1->empId);
	printf("%s\n",emp1->empName);	
	printf("%f\n",emp1->sal);
	printf("%p\n",emp1->next);
	
	printf("\n");

	printf("%d\n",emp2->empId);
	printf("%s\n",emp2->empName);	
	printf("%f\n",emp2->sal);
	printf("%p\n",emp2->next);
	
	printf("\n");

	printf("%d\n",emp3->empId);
	printf("%s\n",emp3->empName);	
	printf("%f\n",emp3->sal);
	printf("%p\n",emp3->next);
}
