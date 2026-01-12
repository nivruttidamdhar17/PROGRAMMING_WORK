/*C program to find sum digit of any number*/
#include <stdio.h>

int main(void)
{
    int num;
    int sum=0;
    printf("Enter A number : ");
    scanf("%d", &num);

    // Sum of digits
    while(num > 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    printf("Sum of digits in give number is : %d\n", sum);
    return 0;
}
