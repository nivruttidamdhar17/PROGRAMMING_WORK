#include<stdio.h>

void main()
{
    int count;
    int sum=0;

    for(int i=1;i<=200;i++)
    {
        if(i%2==0)
        {
            count++;
            sum=sum+i;
        }
    }

    printf("\nCount is : %d",count);
    printf("\nSum of even numbers is : %d",sum);
}
