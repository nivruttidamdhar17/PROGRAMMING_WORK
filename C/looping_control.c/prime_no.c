// prime number
#include<stdio.h>
int main()
{
    int no,i,flag=0;
    printf("Enter no\n");
    scanf("%d",&no);
    for(i=2;i<no;i++)
    {
        if(no%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Number is prime");
    }else
    {
        printf("number is not prime");
    }
}