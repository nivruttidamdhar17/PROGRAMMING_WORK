// enter n numbers and display only PRIME numbers
#include<stdio.h>
int main()
{
    int a[100],i,n,flag,j;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("Enter Elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Display only prime numbers\n");
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d is prime\n",a[i]);
        }
    }
}