#include<stdio.h>
void sum(int *a,int *b, int *t);
void main()
{
    int num1;
    int num2;
    int total;
    printf("Enter value of a and b: \n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    sum(&num1,&num2,&total);
    printf("Sum of two elements is : %d",total);
    
}

void sum(int *a,int*b, int *t)
{
    *t= *a+*b;
}