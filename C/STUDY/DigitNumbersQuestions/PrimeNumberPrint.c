/* C program to print all prime numbers between 1 to n */
#include <stdio.h>

int main(void)
{
    int num;
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
            printf("%d is Prime Number!\n", j);
    }

    return 0;
}
