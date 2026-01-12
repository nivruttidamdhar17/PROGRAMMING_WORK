#include <stdio.h>
#include <stdlib.h>

struct emp_name
{
    char first_name[10];
    char last_name[10];
}pemp_name;

struct address
{
    char area[10];
    char city[10];
    int pin;
}paddress;

struct Employee
{
    int emp_id;
    struct address *paddress;
    struct emp_name *pemp_name;
    int age;
    float salary;
    char designation[10];
};

void get_info(struct Employee*);
void print_info(struct Employee*);

struct Employee* emp;

void main()
{
    //Allocating memory to the instance of the structure
    emp = (struct Employee*)malloc(sizeof(struct Employee));
    emp->paddress = (struct address*)malloc(sizeof(struct address)); 
    emp->pemp_name = (struct emp_name*)malloc(sizeof(struct emp_name));

    printf("\n=================================Employee Details===========================\n");
    get_info(emp);
    print_info(emp);

}

void get_info(struct Employee* pemp)
{
    printf("----------------------Enter the information of Employee---------------------------\n");
    printf("Enter Employee Id: ");
    scanf("%d", &pemp->emp_id);
    printf("\nEnter Employee name\n\tFirst Name: ");
    scanf("%s",&pemp->pemp_name->first_name);
    printf("\tLast Name: ");
    scanf("%s",&pemp->pemp_name->last_name);

    printf("\n\nEnter Address: \n\tArea: ");
    scanf("%s",&pemp->paddress->area);
    printf("\tCity: ");
    scanf("%s",&pemp->paddress->city);
    printf("\tPincode: ");
    scanf("%d",&pemp->paddress->pin);

    printf("\n\nEnter Age: ");
    scanf("%d", &pemp->age);

    printf("\nEnter Salary: ");
    scanf("%f",&pemp->salary);

    printf("\nEnter Designation: ");
    scanf("%s", pemp->designation);
}

void print_info(struct Employee *pemp)
{
    printf("\n===============================Details of the Employee are===============================\n");
    printf("\tEmployee Id is: %d", pemp->emp_id);
    printf("\n\tEmployee Name: %s %s",pemp->pemp_name->first_name, pemp->pemp_name->last_name);
    printf("\n\tEmployee address: %s %s, %d",pemp->paddress->area, pemp->paddress->city, pemp->paddress->pin);
    printf("\n\tAge is: %d", pemp->age);
    printf("\n\tSalary of employee: %f",pemp->salary);
    printf("\n\tDesignation of employee is: %s",pemp->designation);
    printf("\n===========================================End===========================================");
}
