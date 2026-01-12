#include<stdio.h>
int main()
{
    int a[100],n,i;
    printf("enter n\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Display elements\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nDisplay negative elements\n");
    for(i=0;i<n;i++)
    {
        if(a[i]<=0)
        {
            printf("%d ",a[i]);
        }
    }
}