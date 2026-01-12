/* C program to print sum of all prime numbers between 1 to n */
#include <stdio.h>

int main(void)
{
    int num, sum = 0;
    int j;


    printf("Enter a maximum number till print all Prime Numbers : ");
    scanf("%d", &num);

    //Code for Prime number
    for(int j=2; j<=num; j++)
    {
        char prime = 1;

        for(int i = 2; i <= j/2; i++)
        {
            if(j % i == 0)
            {
                prime = 0;
                break;
            }
        }

        if(prime == 1)
            sum = sum + j;
    }
    printf("Sum of all prime numbers is : %d", sum);

    return 0;
}
