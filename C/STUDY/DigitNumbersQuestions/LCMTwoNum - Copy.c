/* C program to find LCM of two numbers */
#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int LCM;

    printf("Enter a number : ");
    scanf("%d", &num1);

    printf("Enter 2nd number : ");
    scanf("%d", &num2);

    int max = (num1 > num2) ? num2 : num1;     // Find Maximum number

    int i = max;
    while(1)
    {
        if((i % num1 == 0) && (i % num2 == 0))
        {
            LCM = i;
            break;
        }
        i = i + max;
    }

    printf("LCM of given number is : %d\n", LCM);
    return 0;
}
