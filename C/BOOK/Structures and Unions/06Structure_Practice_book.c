#include<stdio.h>
#include<stdlib.h>

struct leap
{
    int year;
};

void check_leap(struct leap* pCheck_leap);
struct leap *pleap;

void main()
{

    pleap = (struct leap*)malloc(sizeof(struct leap));
    printf("Enter year to check is it leap year: ");
    scanf("%d",&pleap->year);
    check_leap(pleap);
}

void check_leap(struct leap* pCheck_leap)
{
    if((pCheck_leap->year % 400) == 0)
    {
        printf("%d is leap year.",pCheck_leap->year);
    }
    else if((pCheck_leap->year % 100) == 0)
    {
        printf("%d is not leap year.",pCheck_leap->year);
    }
    else if((pCheck_leap->year)%4 == 0)
    {
        printf("%d is leap year.",pCheck_leap->year);
    }
    else{
        printf("%d is not leap year.",pCheck_leap->year);
    }
}