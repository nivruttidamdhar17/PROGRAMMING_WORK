#include<stdio.h>
int main()
{
    int i,j;
    char p;
    p='A';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",p);
        }
        printf("\n");
        p++;
    }
}