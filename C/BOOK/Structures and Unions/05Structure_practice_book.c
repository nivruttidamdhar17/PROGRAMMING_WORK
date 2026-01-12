#include <stdio.h>
#include <stdlib.h>

struct numbers
{
    int num1;
    int num2;
    int num3;
    int min;
};

struct numbers* ins_num;
void get_info(struct numbers* inc_num1);
void find_min(struct numbers* inc_num2);
void print_data(struct numbers* ins_num3);

void main()
{
    ins_num = (struct numbers*)malloc(sizeof(struct numbers));
    ins_num->min = 1000;
    get_info(ins_num);
    print_data(ins_num);
    find_min(ins_num);
    printf("Minimum from 3 numbers is: %d",ins_num->min);
}

void get_info(struct numbers* ins_num1)
{
    printf("Enter 3 numbers to find minimum: ");
    scanf("%d",&ins_num1->num1);
    scanf("%d",&ins_num1->num2);
    scanf("%d",&ins_num1->num3);
}

void find_min(struct numbers* ins_num2)
{
    if((ins_num2->min) > (ins_num2->num1))
    {
        ins_num2->min = ins_num2->num1;
    }
    if((ins_num2->min) > (ins_num2->num2))
    {
        ins_num2->min = ins_num2->num2;
    }
    if((ins_num2->min) > (ins_num2->num3))
    {
        ins_num2->min = ins_num2->num3;
    }
}

void print_data(struct numbers* ins_num3)
{
    printf("\nGiven all three numbers are: \n1) %d     2) %d     3) %d\n\n",ins_num3->num1,ins_num3->num2, ins_num3->num3);
}
