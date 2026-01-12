#include<stdio.h>
#include<string.h>

struct Batsmen {

	int jerNo;
	char name[20];
	float avg;
	Batsmen *next;
};

struct Company {

	int empId;
	char empName[20];
	float rev;
	Company *next;
}

void main() {

	Batsmen obj1;
	Company obj2;

	Batsmen *head = &obj1;

	head->jerNo = 18;
	strcpy(head->name,"Virat Kohli");
	head->avg = 75.60;
	head->next = &obj2;
	
	head->next->empId = 1;
	strcpy(head->next->empName,"Nivrutti");
	head->next->rev = 45.60;

	printf("Employee Id = %d\n"obj1.next->empId);	
	printf("Employee Name = %s\n",obj1.next->->empName);	
	printf("Revenue = %f\n",obj1.next->rev);	


}
