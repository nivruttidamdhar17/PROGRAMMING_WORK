#include<stdio.h>
int main()
{
    int i=0,no,a[100];
    printf("Enter number to convert into octal\n");
    scanf("%d",&no);
    while(no!=0)
    {
        a[i]=no%8;
        no=no/8;
        i++;
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}