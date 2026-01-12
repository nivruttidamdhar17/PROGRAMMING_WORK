#include<stdio.h>
int main()
{
    int no,d,s=0;
    printf("Enter no\n");
    scanf("%d",&no);
    while(no!=0)
    {
        d=no%10;
        no=no/10;
        s=s+d;
    }
    printf("sum of digits=%d\n",s);
}