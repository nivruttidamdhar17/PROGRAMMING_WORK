//enter n elements and display only those numbers which has atleast one even digits.
#include<stdio.h>
int main()
{
    int a[100],i,n,d,no;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("Enter Elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Displayed only numbers which atleast one even digit\n");
    for(i=0;i<n;i++)
    {
        no=a[i];
        while(no!=0)
        {
            d=no%10;
            no=no/10;
            if(d%2==0)
            {
                printf("%d\n",a[i]);
                break;
            }
        }
    }
}
