#include <stdio.h>

int main(void)
{
    printf("Enter A number : ");
    int num;
    scanf("%d", &num);

    // find first number 
    while(num > 10)
    {
        num = num / 10;
    }
    printf("First digit in give number is : %d\n", num);
    return 0;
}
