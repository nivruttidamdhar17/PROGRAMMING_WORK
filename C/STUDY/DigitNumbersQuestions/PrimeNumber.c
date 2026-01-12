/* C program to check whether a number is prime number or not */
#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    char prime = 1;

    //Code for Prime number
    for(int i = 2; i <= num/2; i++)
    {
        if(num % i == 0)
        {
            prime = 0;
        }
    }

    if(prime == 0)
        printf("Givem Number is Prime!\n");
    else
        printf("Given Number is not prime!\n");

    return 0;
}
