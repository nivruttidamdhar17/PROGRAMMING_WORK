//enter n numbers and add all
#include<stdio.h>
int main()
{
    int a[100],n,i,s=0;
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
    printf("\n Addition of all elements\n");
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    printf("%d",s);
}