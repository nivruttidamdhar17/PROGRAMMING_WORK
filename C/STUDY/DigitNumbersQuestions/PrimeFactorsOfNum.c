/* C program to find prime factors of a number */
#include <stdio.h>

int main(void)
{
    int num, sum = 0;
    int j;


    printf("Enter a number to find Prime factors : ");
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

        if((prime == 1) && (num % j == 0))
            printf("%d is a Prime Factor of given number %d\n", j, num);
    }

    return 0;
}
