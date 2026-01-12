#include<stdio.h>
int main()
{
    int i,j,p;
    p=10;
    for(i=1;i<=5;i++)
    {   
        for(j=1;j<=i;j++)
        {   
            printf("%d",p);
        }
        printf("\n");
    }
}