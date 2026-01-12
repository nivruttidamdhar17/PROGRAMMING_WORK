#include<stdio.h>
int main()
{
    int i,j,p,q;  //q always for i(rows) and p always for j(columns)
    q=1;
    for(i=1;i<=5;i++)
    {   p=q;
        for(j=1;j<=i;j++)
        {   
            printf("%d ",p);
            p--; //for j(columns) p-- for decrement and p++ for increament
        }
        printf("\n");
        q++; //for i(rows)
    }
}