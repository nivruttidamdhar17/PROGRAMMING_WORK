#include<stdio.h>
int main()
{
    int i,j,k,p,q;
    q=5;
    for(i=5;i>=1;i--)
    {   
        p=q;
        for(k=4;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",p);
            p--;
        }
        q--;
        printf("\n");
    }
}