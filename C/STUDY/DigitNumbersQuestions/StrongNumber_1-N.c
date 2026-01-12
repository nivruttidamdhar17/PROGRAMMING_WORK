/* C program to find Armstrong numbers between 1 to n */
#include <stdio.h>

int my_pow(float base, int exponent);
int getDigits(int num);

int main(void)
{
    int num, originalNum, lastDigit=0, sum=0, maxNum;

    printf("Enter upper limit to check all armstrong numbers : ");
    scanf("%d", &maxNum);

    for(int i=1; i<=maxNum; i++)
    {
        originalNum = i;
        num = i;
        sum = 0;

        // find strong number 
        while(num != 0)
        {
            lastDigit = num % 10;
            num = num / 10;
            sum = sum + factorial(lastDigit);
        }


        /* Check Strong number condition */
        if(sum == originalNum)
        {
            printf("%d is STRONG NUMBER\n", originalNum);
        }
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

