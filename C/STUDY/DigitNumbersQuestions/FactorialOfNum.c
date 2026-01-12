/* C program to find factorial of a number */
#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    int factorial = 1;

    //Code for Factorial number
    for(int i = num; i >= 1; i--)
    {
        factorial = factorial * i;
    }

    printf("Factorial of given number is : %d\n", factorial);
    return 0;
}
