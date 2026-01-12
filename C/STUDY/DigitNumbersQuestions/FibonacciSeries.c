/* C program to find Armstrong numbers between 1 to n */
#include <stdio.h>

int my_pow(float base, int exponent);
int getDigits(int num);

int main(void)
{
    int num1, num2, num3, maxNum;

    printf("Enter length of fibonacci series to be printed : ");
    scanf("%d", &maxNum);

    num1 = 0;
    num2 = 1;
    num3 = 0;
    
    // Print fibonacci series till maxNum
    for(int i=1; i<=maxNum; i++)
    {
        printf("%d ", num3);
        num1 = num2;
        num2 = num3;
        num3 = num1 + num2;
    }
    return 0;
}

