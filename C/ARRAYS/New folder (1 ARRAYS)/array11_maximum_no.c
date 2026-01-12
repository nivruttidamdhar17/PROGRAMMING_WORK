// enter an elements and display maximum.
#include<stdio.h>
int main()
{
    int a[100],n,i,max;
    printf("\nenter n\n");
    scanf("%d",&n);
    printf("enter elememts\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("max=%d",max);
}