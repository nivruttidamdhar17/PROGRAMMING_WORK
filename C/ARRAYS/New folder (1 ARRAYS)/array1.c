#include<stdio.h>
int main()
{
    int a[20],i;
    printf("Enter Elements\n");
    for(i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Display Elements\n");
    for(i=0;i<20;i++)
    {
        printf("%d ",a[i]);
    }
}