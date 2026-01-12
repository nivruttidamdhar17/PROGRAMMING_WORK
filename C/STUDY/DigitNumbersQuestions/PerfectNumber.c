/* C program to find prime factors of a number */
#include <stdio.h>

int main(void)
{
    int num, sum = 0;
    int j;


    printf("Enter a number : ");
    scanf("%d", &num);

    //Code for Perfect number
    for(int i=1; i <= num/2; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }

    /* Check whether the sum of proper divisors is equal to num */
    if(sum == num && num > 0)
    {
        printf("%d is PERFECT NUMBER\n", num);
    }
    else
    {
        printf("%d is NOT PERFECT NUMBER\n", num);
    }
    return 0;
}
