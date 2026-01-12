// perfect number
#include<stdio.h>
int main()
{
    int no,i,s=0;
    printf("Enter a number\n");
    scanf("%d",&no);
    for(i=1;i<no;i++)
    {
        if(no%i==0)
        {
            s=s+i;
        }
    }
    if(s==no)
    {
        printf("Number is perfect");
    }
    else
    {
        printf("Number is not perfect");
    }
}