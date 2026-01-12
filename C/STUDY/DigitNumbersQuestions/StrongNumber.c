/* C program to find factorial of a number */
#include <stdio.h>

int main(void)
{
    int num, originalNum, sum = 0, digit;

    printf("Enter a number : ");
    scanf("%d", &num);

    originalNum = num;

    while(num != 0)
    {
        digit = num % 10;
        num = num / 10;
        sum = sum + factorial(digit);
    }

    /* Check Strong number condition */
    if(sum == originalNum)
    {
        printf("%d is STRONG NUMBER", originalNum);
    }
    else
    {
        printf("%d is NOT STRONG NUMBER", originalNum);
    }

    return 0;
}

int factorial(int num)
{
    int factorial = 1;

    //Code for Factorial number
    for(int i = num; i >= 1; i--)
    {
        factorial = factorial * i;
    }
    return factorial;
}
