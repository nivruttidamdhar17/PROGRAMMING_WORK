//transpose matrix
#include<stdio.h>
int main()
{
    int **a,m,n,i,j;
    printf("Enter m and n\n");
    scanf("%d%d",&m,&n);
    a=
    printf("Enter matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",*(*(a+i)+j));
        }
    }
    
}