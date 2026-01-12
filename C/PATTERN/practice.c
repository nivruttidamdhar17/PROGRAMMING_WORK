#include<stdio.h>
int main()
{
    int i,j,k;
    char p,q;
    q='A';
    for(i=1;i<=5;i++)
    {
        p=q;
        for(k=4;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c ",p);
            p--;
        }
        printf("\n");
        q++;
    }
}