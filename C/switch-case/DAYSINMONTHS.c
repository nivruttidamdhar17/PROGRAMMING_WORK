//Write a C program print total number of days in a month using switch case.
#include<stdio.h>
int main()
{
    int month;
    printf("enter the month number(1-12)");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
            printf("JAN, 31 days");
            break;
        case 2:
            printf("FEB, 28/29 days");
            break;
        case 3:
            printf("MAR, 31 days");
            break;
        case 4:
            printf("APRIL, 30 days");
            break;
        case 5:
            printf("MAY, 31 days");
            break;
        case 6:
            printf("JUME, 30 days");
            break;
        case 7:
            printf("JULY, 31 days");
            break;
        case 8:
            printf("AUG, 31 days");
            break;
        case 9:
            printf("SEP, 30 days");
            break;
        case 10:
            printf("OCT, 31 days");
            break;
        case 11:
            printf("NOV, 30 days");
            break;
        case 12:
            printf("DEC, 31 days");
            break;
        default:
            printf("enter valid month number");
            break;
        
    }
}