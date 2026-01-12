//Write program toread a floating point number and display rightmost digit of the integral part of the number

#include<stdio.h>

void main()
{
    float num;
    int RM;


    printf("Enter floating value: ");
    scanf("%f",&num);

    RM=(int)num%10;

    printf("Rignt Most value of the integral value in given float number is : %d",RM);

}