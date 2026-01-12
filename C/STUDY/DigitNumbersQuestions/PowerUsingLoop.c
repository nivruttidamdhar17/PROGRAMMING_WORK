/*C program to find power of a number using for loop */
#include <stdio.h>

int my_pow(float base, int exponent)
{
    //Code for Power of number
    float num = 1;
    for(int i = 1; i<=exponent; i++)
    {
        num = num * base;
    }
    return num;
}

int main(void)
{
    float base;
    float num = 1;
    int exponent;

    printf("Enter A base number : ");
    scanf("%f", &base);
    printf("Enter An exponent number : ");
    scanf("%d", &exponent);

    num = my_pow(base, exponent);

    printf("Power of given number is : %f\n", num);
    return 0;
}
