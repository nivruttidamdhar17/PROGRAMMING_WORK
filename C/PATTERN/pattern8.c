#include<stdio.h>
int main()
{
    int i,j;
    char p;
    for(i=1;i<=5;i++)
    {   p='A';
        for(j=1;j<=i;j++)
        {
            printf("%c ",p);
            p++;
        }
        printf("\n");
    }
}