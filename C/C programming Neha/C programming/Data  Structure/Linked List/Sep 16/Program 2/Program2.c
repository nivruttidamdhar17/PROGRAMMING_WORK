#include<stdio.h>
#include<string.h>

typedef struct Employee {

	int empId;
	char empName[20];
	float sal;
	struct Employee *next;
}Emp;

void main() {

	Emp obj1,obj2;

	Emp *head = &obj1;

	//obj1.empId = 1;
	head->empId = 1;
	
	//strcpy(obj1.empName,"Kanha");
	strcpy(head->empName,"Kanha");

	//obj1.sal = 50.00;
	head->sal = 50.00;
	head->next = &obj2;
	
	head->next->empId = 2;
	strcpy(head->next->empName,"Rahul");
	head->next->sal = 60.00;

	printf("Employee Id = %d\n",obj1.empId);
	printf("Employee Name = %s\n",obj1.empName);
	printf("Employee sal = %f\n",obj1.sal);

	printf("Employee Id = %d\n",obj2.empId);
	printf("Employee Name = %s\n",obj2.empName);
	printf("Employee sal = %f\n",obj2.sal);
}
