//maximum element in matrix
#include<stdio.h>
int main()
{
    int a[10][10],i,j,m,max,n;
    printf("Enter m and n\n");
    scanf("%d%d",&m,&n);
    printf("Enter matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Display matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("maximum element from matrix\n");
    max=a[0][0];
    for(i=0;i<m;i++)
    {
        
        for(j=0;j<n;j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
            }
        }
    }
    printf("%d",max);
}