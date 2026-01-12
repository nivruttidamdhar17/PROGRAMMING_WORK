#include<stdio.h>
int main()
{
    int i=0,no,a[100];
    printf("Enter decimal number(no) to convert into binary\n");
    scanf("%d",&no);
    while(no!=0)
    {
        a[i]=no%2;
        no=no/2;
        i++;
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}