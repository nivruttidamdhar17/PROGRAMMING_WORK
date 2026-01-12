#include<stdio.h>
void main()
{
    float f1;
    float f2;
    int result;
    printf("Enter two numbers : \n");
    scanf("%f",&f1);
    scanf("%f",&f2);

    result=(int)(f1+f2);
    printf("Result of two numbers: %d",result);

    printf("\nEntered two numbers are f1=%f and f2=%f",f1,f2);
}