//enter column(n) and row(m) and find transpose matrix of its
#include<stdio.h>
int main()
{
    int a[10][10],i,j,m,n; //Here m is used for row, and n for column. and i=row, j=column
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
    printf("dislay before transpose matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("display after transpose matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}