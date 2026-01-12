/* C program to find reverse of a number */
#include <stdio.h>

int main(void)
{
    int num;
    int rev = 0;
    printf("Enter A number : ");
    scanf("%d", &num);

    // Reverse given number
    while(num > 0)
    {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }
    printf("Reverse Numbe of given number is : %d\n", rev);
    return 0;
}
