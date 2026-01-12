#include<stdio.h>
int main()
{
    int i,j,k;
    char p;
    p='A';
    for(i=6;i>=1;i--)
    {   
        for(k=5;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c ",p);
            p++;
        }
        printf("\n");
    }
}