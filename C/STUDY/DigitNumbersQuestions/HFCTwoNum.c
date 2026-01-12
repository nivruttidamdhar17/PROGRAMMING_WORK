/* C program to find HFC of two numbers */
#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int HFC;
    printf("Enter a number : ");
    scanf("%d", &num1);

    printf("Enter 2nd number : ");
    scanf("%d", &num2);

    int smallNum = (num1 < num2) ? num1 : num2;     // Find small number

    for(int i=1; i <= smallNum; i++)
    {
        if((num1 % i==0) && (num2 % i == 0))
            HFC = i;
    }

    printf("HFC of given number is : %d\n", HFC);
    return 0;
}
