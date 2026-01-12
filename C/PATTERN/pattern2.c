#include<stdio.h>
int main()
{
    int i,j,p;
    p=5; //if first column values are different then show p here...
    for(i=1;i<=5;i++)
    {
        //if first column values are same then show value of p here...
        for(j=1;j<=i;j++)
        {
            printf("%d",p);
            // p-- if value of j(last row is same)
        }
        printf("\n");
        p--; // place p-- here if value of i (first column is different)
    }
}