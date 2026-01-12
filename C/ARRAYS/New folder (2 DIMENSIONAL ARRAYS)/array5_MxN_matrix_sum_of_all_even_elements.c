#include<stdio.h>
int main()
{
    int a[10][10],i,j,m,n,s=0; //Here m is used for row, and n for column. and i=row, j=column
    printf("enter m and n\n");
    scanf("%d%d",&m,&n);\

    printf("Enter matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("display matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {

        }
    }
    
}