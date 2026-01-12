//enter elements and display EVEN, ODD, POSITIVE, NEGATIVE elements from them;
#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("enter n\n");
    scanf("%d",&n);
    printf("Enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Display matrix\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    //now display even elements only
    printf("even elements from array\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0&&a[i]>0)
        {
            printf("%d ",a[i]);
        }
    }
    printf("\n");
    //now display odd elements only
    printf("odd elements from array\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0&&a[i]>0)
        {
            printf("%d ",a[i]);
        }
    }
    printf("\n");
    //display negative elements only
    printf("negative elements from array\n");
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("%d ",a[i]);
        }
    }
    printf("\n");
    //for positive elements only
    printf("positve elements from array\n");
    for(i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            printf("%d ",a[i]);       
        }
    }
}