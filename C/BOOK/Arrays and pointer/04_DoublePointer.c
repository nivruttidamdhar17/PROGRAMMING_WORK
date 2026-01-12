#include<stdio.h>
void main()
{
    int num1=10;
    int *ptr=&num1;
    int **ptr2=&ptr;


    printf("Value from single pointer is : %d",*ptr);

    pringf("Value present in double pointer i.e is : %d",*ptr2);

    printf("Value of num1 from double pointer is : %d",**ptr2);

}