/* C program to check whether a number is armstrong number or not */
#include <stdio.h>

int my_pow(float base, int exponent);
int getDigits(int num);

int main(void)
{
    int num, originalNum, digits=0, lastDigit=0, sum=0;

    printf("Enter any number to check Armstrong number: ");
    scanf("%d", &num);

    originalNum = num;

    digits = getDigits(num);

    // find Armstrong number 
    while(num != 0)
    {
        lastDigit = num % 10;
        num = num / 10;
        sum = sum + my_pow(lastDigit, digits);
    }

    /* Check for Armstrong number */
    if(originalNum == sum)
    {
        printf("%d is ARMSTRONG NUMBER", originalNum);
    }
    else
    {
        printf("%d is NOT ARMSTRONG NUMBER", originalNum);
    }

    return 0;
}

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

int getDigits(int num)
{
    int digit = 0;
    while(num != 0)
    {
        num = num / 10;
        digit++;
    }
    return digit;
}
