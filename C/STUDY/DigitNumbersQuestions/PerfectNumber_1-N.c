/* C program to find Perfect numbers between 1 to n */
#include <stdio.h>

int my_pow(float base, int exponent);
int getDigits(int num);

int main(void)
{
    int num, originalNum, lastDigit=0, sum=0, maxNum;

    printf("Enter upper limit to check all Perfect numbers : ");
    scanf("%d", &maxNum);

    for(int i=1; i<=maxNum; i++)
    {
        originalNum = i;
        num = i;
        sum = 0;

        //Code for Perfect number
        for(int i=1; i <= num/2; i++)
        {
            if(num % i == 0)
            {
                sum = sum + i;
            }
        }

        /* Check Strong number condition */
        if(sum == originalNum)
        {
            printf("%d is STRONG NUMBER\n", originalNum);
        }
    }
    return 0;
}

