#include<stdio.h>
int main()
{
    int i,j,p,q;
    q=5;
    for(i=1;i<=5;i++)
    {   
        p=q;
        for(j=1;j<=i;j++)
        {   
            
            printf("%d ",p);
            p++;
        }
        printf("\n");
        q--;
    }
}