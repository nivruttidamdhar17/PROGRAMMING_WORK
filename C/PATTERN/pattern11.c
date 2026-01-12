#include<stdio.h>
int main()
{
    int i,j,p;
    for(i=1;i>=5;i--)
    {   p=1;
        for(j=1;j>=i;j++)
        {
            printf("%d ",p);
        }
        printf("\n");
    }
}