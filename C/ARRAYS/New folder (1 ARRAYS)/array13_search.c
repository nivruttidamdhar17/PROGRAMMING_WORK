//enter elements and search the number in array.
#include<stdio.h>
int main()
{
    int a[100],n,i,no,flag=0;
    printf("\nenter n\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter no to be searches\n");
    scanf("%d",&no);
    for(i=0;i<n;i++)
    {
        if(no==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("number is found");
    }
    else
    {
        printf("number is not found");
    }
}