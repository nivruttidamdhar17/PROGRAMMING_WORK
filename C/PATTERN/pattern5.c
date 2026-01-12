#include<stdio.h>
int main()
{
    int i,j,p;
    p=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",p);
            p++;
        }
        printf("\n");
    }
}