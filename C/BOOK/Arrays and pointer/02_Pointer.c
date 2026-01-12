#include <stdio.h>
void main()
{
    int num1=2,num2=3, sum=0,mul=0,div=1;

    int *ptr1=&num1;
    int *ptr2=&num2;

    sum=*ptr1+*ptr2;
    printf("Addition of two values from pointer is: %d",sum);

    mul=sum*(*ptr1);
    printf("\nMultiplication of sum and pointer value is : %d",mul);

    *ptr2=*ptr2+1;

    div=9+(*ptr1)/(*ptr2)-30;
    printf("\nAnswer of (div=9+(*ptr1)/(*ptr2)-30;) is : %d",div);
}
