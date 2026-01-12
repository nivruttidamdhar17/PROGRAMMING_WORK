#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter no. to calculate tables\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        s=n*i;
        printf("%d*%d=%d\n",n,i,s);
    }
}