#include<stdio.h>
#include<stdlib.h>
struct date
{
    int day;
    int month;
    int year;
};



void get_info(struct date*);
void check_leap(struct date* pCheck_leap);
void varify_date(struct date* pdate);

int flag_leap = 0;

void main()
{
    struct date* pdate = (struct date*)malloc(sizeof(struct date));

    get_info(pdate);
    check_leap(pdate);
    varify_date(pdate);
    printf("\n=======================================================================================================================\n");
}

void get_info(struct date* pdate_ins)
{
    printf("\n=======================================================================================================================\n");
    printf("Enter date\n\tDay: ");
    scanf("%d",&pdate_ins->day);
    printf("\tMonth: ");
    scanf("%d",&pdate_ins->month);
    printf("\tYear: ");
    scanf("%d",&pdate_ins->year);
    printf("=======================================================================================================================\n");
}

void check_leap(struct date* pCheck_leap)
{
    if((pCheck_leap->year % 400) == 0)
    {
        flag_leap = 1;
    }
    else if((pCheck_leap->year % 100) == 0)
    {
        flag_leap = 0;
    }
    else if((pCheck_leap->year)%4 == 0)
    {
        flag_leap = 1;
    }
    else{
        flag_leap = 0;
    }
}

void varify_date(struct date* pdate)
{
    if(flag_leap == 1)
    {
        if(((pdate->month) == 2) && (pdate->day <= 29) && (pdate->day >= 0))
        {
            printf("Entered date is correct ! i.e %d/%d/%d",pdate->day,pdate->month,pdate->year);
        }
        else if(((pdate->month) == 1 || (pdate->month) == 3 || (pdate->month) == 5 || (pdate->month) == 7 || (pdate->month) == 8 || (pdate->month) == 10 || (pdate->month) == 12) && (pdate->day <=31) && pdate->day >= 0)
        {
            printf("Entered date is valid! i.e. %d/%d/%d",pdate->day,pdate->month,pdate->year);
        }
        else if(((pdate->month) == 4 || (pdate->month) == 6 || (pdate->month) == 9 || (pdate->month) == 11) && (pdate->day <=30) && pdate->day >= 0)
        {
            printf("Entered date is valid! i.e. %d/%d/%d",pdate->day,pdate->month,pdate->year);
        }
        else{
            printf("Entered date is not valid! i.e. %d/%d/%d",pdate->day,pdate->month,pdate->year);
        }
    }

    if(flag_leap == 0)
    {
        if(((pdate->month) == 2) && (pdate->day <= 28) && (pdate->day >= 0))
        {
            printf("Entered date is correct ! i.e %d/%d/%d",pdate->day,pdate->month,pdate->year);
        }
        else if(((pdate->month) == 1 || (pdate->month) == 3 || (pdate->month) == 5 || (pdate->month) == 7 || (pdate->month) == 8 || (pdate->month) == 10 || (pdate->month) == 12) && (pdate->day <=31) && pdate->day >= 0)
        {
            printf("Entered date is valid! i.e. %d/%d/%d",pdate->day,pdate->month,pdate->year);
        }
        else if(((pdate->month) == 4 || (pdate->month) == 6 || (pdate->month) == 9 || (pdate->month) == 11) && (pdate->day <=30) && pdate->day >= 0)
        {
            printf("Entered date is valid! i.e. %d/%d/%d",pdate->day,pdate->month,pdate->year);
        }
        else{
            printf("Entered date is not valid! i.e. %d/%d/%d",pdate->day,pdate->month,pdate->year);
        }
    }

}
