#include<stdio.h>
int main()
{
    int i,j,k;
    char p,q;
    q=1;
    for(i=1;i<=5;i++)
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
        q++;
        printf("\n");
    }
}