/* C program to find Armstrong numbers between 1 to n */
#include <stdio.h>

int my_pow(float base, int exponent);
int getDigits(int num);

int main(void)
{
    int num, originalNum, digits=0, lastDigit=0, sum=0, maxNum;

    printf("Enter upper limit to check all armstrong numbers : ");
    scanf("%d", &maxNum);

    for(int i=1; i<=maxNum; i++)
    {
        originalNum = i;
        num = i;
        digits = getDigits(num);
        sum = 0;

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
            printf("%d is ARMSTRONG NUMBER\n", originalNum);
        }
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
