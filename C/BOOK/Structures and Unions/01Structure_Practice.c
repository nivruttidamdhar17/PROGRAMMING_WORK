#include<stdio.h>

//#pragma pack(1)
struct student
{
    // int roll_no;
    // float percentage;
    // double ID;
    // float fees;
    // char name[40];
};

void main()
{
    struct student obj;
    printf("Size of struct student is : %ld",sizeof(struct student));
}
