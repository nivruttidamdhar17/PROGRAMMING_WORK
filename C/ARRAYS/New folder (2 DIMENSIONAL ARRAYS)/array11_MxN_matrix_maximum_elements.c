//maximum element from matrix array.
#include<stdio.h>
int main()
{
    int a[10][10],m,n,i,j,max;
    printf("enter m and n\n");
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
    printf("maximum number from matrix is: ");
    max=a[0][0];
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
            }
        }
    }
    printf("max=%d",max);
}