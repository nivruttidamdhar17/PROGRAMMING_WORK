/* C program to swap first and last digit of a number*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    // variable declarations
    int num;
    int digits;
    int firstNum;
    int lastNum;
    int swappedNum;

    printf("Enter A number : ");
    scanf("%d", &num);

    lastNum = num % 10;
    digits = log10(num);
    firstNum = num / pow(10, digits);

    swappedNum = (lastNum * pow(10, digits));
    swappedNum = swappedNum + (num % (int)pow(10, digits));
    swappedNum = swappedNum - lastNum + firstNum;
    
    printf("Resultant number after swapping first and last digits is : %d\n", swappedNum);
    return 0;
}
