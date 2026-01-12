/* C program to find last digit of any number */
#include <stdio.h>

int main(void)
{
    printf("Enter A number : ");
    int num;
    scanf("%d", &num);

    // find last number
    num = num % 10;
    printf("Last digit in give number is : %d\n", num);
    return 0;
}
