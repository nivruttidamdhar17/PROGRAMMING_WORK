#include<stdio.h>
int main()
{
    int i,j,k;
    char p;
    p='A';
    for(i=5;i>=1;i--)
    {   
        for(k=4;k>=i;k--)
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