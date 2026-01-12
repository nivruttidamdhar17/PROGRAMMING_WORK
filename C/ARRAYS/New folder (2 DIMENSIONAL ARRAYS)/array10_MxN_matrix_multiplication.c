//
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,m;
    printf("enter m\n");
    scanf("%d",&m);
    printf("enter a matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter matrix b\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Display matrix a\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("Display matrix b\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d  ",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            c[i][j]=0;
            for(k=0;k<m;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("Display multiplication matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}