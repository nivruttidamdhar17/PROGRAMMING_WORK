// enter elements and do the addition of all diagonaol elements
#include<stdio.h>
int main()
{
    int a[10][10],m,i,j,s=0;
    printf("Enter m\n");
    scanf("%d",&m);
    printf("enter matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("display matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            {
                s=s+a[i][j];
            }
        }
    }
    printf("addition of diagonal elements=%d\n",s);
}