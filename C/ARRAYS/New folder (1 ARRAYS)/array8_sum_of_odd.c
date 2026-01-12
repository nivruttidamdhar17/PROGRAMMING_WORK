#include<stdio.h>
int main()
{
    int a[100],i,s=0,n;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("Enter Elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Display elements\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nAddition of all odd elements\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            s=s+a[i];
        }
    }printf("%d",s);
}