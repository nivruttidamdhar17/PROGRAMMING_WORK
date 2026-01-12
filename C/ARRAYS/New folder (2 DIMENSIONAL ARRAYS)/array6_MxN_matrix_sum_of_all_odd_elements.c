// enter m(column) and n(row) and do the addition of all odd elements
#include<stdio.h>
int main()
{
    int a[10][10],m,n,i,j,s=0;
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
    printf("\ndisplay matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]%2!=0)
            {
                s=s+a[i][j];
            }
        }
    }
    printf("sum of all odd elements=%d\n",s);
}