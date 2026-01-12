#include<stdio.h>
int main()
{
    int i,j,p;
    for(i=5;i>=1;i--)
    {   p=5;
        for(j=1;j<=i;j++)
        {
            printf("%d ",p);
            p--;
        }
        printf("\n");
    }
}