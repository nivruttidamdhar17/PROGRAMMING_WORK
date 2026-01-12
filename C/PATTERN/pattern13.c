#include<stdio.h>
int main()
{
    int i,j;
    char p,q;
    q='A';
    for(i=1;i<=5;i++)
    {   
        p=q;
        for(j=1;j<=i;j++)
        {
            printf("%c  ",p);
            p--;
        }
        printf("\n");
        q++;
    }
}