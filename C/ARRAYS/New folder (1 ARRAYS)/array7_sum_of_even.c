// enter elements and sum of all even elements
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
    printf("\n Addition of all even elements\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}