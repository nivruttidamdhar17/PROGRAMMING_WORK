// enter an elements and display maximum.
#include<stdio.h>
int main()
{
    int a[100],n,i,min;
    printf("\nenter n\n");
    scanf("%d",&n);
    printf("enter elememts\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("min=%d",min);
}