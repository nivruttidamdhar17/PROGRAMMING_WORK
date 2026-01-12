#include<stdio.h>
#include<string.h>

typedef struct Employee {

	int empId;
	char empName[20];
	float sal;
	struct Employee *next;
}Emp;

void main() {

	Emp obj1,obj2,obj3;

	obj1.empId = 1;
	strcpy(obj1.empName,"Kanha");
	obj1.sal = 50.00;

	obj1.next = &obj2;

	obj2.empId = 2;
	strcpy(obj2.empName,"Ashish");
	obj2.sal = 60.00;

	obj2.next = &obj3;
	
	obj3.empId = 3;
	strcpy(obj3.empName,"Rahul");
	obj3.sal = 70.00;

	obj3.next = NULL;
	
	struct Employee *head  = &obj1;

	printf("Employee Id = %d\n",obj2.next->empId);
	printf("Employee Name = %s\n",obj2.next->empName);
	printf("Employee salary = %f\n",obj2.next->sal);

	printf("Employee Id = %d\n",obj1.next->empId);
	printf("Employee Name = %s\n",obj1.next->empName);
	printf("Employee salary = %f\n",obj1.next->sal);

	printf("Employee Id = %d\n",head->empId);
	printf("Employee Name = %s\n",head->empName);
	printf("Employee salary = %f\n",head->sal);

}
