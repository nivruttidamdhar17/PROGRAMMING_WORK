#include <stdio.h>

struct Information
{
    int student;
    int roll_number;
    struct Name
    {
        char first_name[10];
        char middle_name[10];
        char last_name[10];
    } obj_name;

    char sex;
    struct dob
    {
        int day;
        int month;
        int year;
    }obj_dob;
    struct marks
    {
        int english;
        int math;
        int cs;
    }obj_marks;
};

struct Information info;

void get_information();
void print_information();

void main()
{
    printf("-------------------Information of the students--------------------\n");
    get_information();
    printf("-------------------Information of student entered------------------\n");
    print_information();
}

void get_information()
{
    printf("Enter the no of students: ");
    scanf("%d", &info.student);
    printf("Enter the roll no of student: ");
    scanf("%d", &info.roll_number);
    printf("\nEnter name of the student: \n");
    printf("\tEnter first name: ");
    scanf("%s",	&info.obj_name.first_name);
    printf("\tEnter middle name: ");
    scanf("%s",	&info.obj_name.middle_name);
    printf("\tEnter last name: ");
    scanf("%s",	&info.obj_name.last_name);

    printf("\n-------------------------------------------------------\n");
    printf("Enter Gender (M or F): ");
    scanf("%s",&info.sex);

    printf("-------------------------------------------------------\n");
    printf("Enter Date of Birth: ");
    printf("\n\tEnter Day: ");
    scanf("%d",&info.obj_dob.day);
    printf("\n\tEnter month: ");
    scanf("%d",&info.obj_dob.month);
    printf("\n\tEnter year: ");
    scanf("%d",&info.obj_dob.year);

    printf("-------------------------------------------------------\n");

    printf("Enter Marks: \n\tEnter English marks: ");
    scanf("%d",&info.obj_marks.english);
    printf("\n\tEnter maths marks: ");
    scanf("%d",&info.obj_marks.math);
    printf("\n\tEnter Comp. Sci. marks: ");
    scanf("%d",&info.obj_marks.cs);
}

void print_information()
{
    printf("Number of students are: %d",info.student);
    printf("\nRoll number is: %d",info.roll_number);
    printf("\nName is: %s %s %s",info.obj_name.first_name,info.obj_name.middle_name, info.obj_name.last_name);
    printf("\nGender is: %c",info.sex);
    printf("\nDate of Birth is: [%d-%d-%d]", info.obj_dob.day, info.obj_dob.month, info.obj_dob.year);
    printf("\nMarks are: \n\t1)English: %d \n\t2)Math: %d \n\t3)CS: %d", info.obj_marks.english, info.obj_marks.math, info.obj_marks.cs);
}