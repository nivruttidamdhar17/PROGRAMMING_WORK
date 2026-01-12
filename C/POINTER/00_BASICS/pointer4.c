#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **a,m,n,j,i,s=0;
    printf("Enter m and n\n");
    scanf("%d%d",&m,&n);
    a=(int**)malloc(m* sizeof(int));
    for(i=0;i<m;i++)
    {
        *(a+i)=(int*)malloc(n*sizeof(int));
    }
    printf("Enter matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",*(a+i)+j);
        }
    }
    printf("display matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",*(*(a+i)+j));
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            s=s+*(*(a+i)+j);
        }
    }
}