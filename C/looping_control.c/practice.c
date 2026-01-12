//power base
#include<stdio.h>
int main()
{
    int x,y,s,i,p=1;
    printf("enter x\n");
    scanf("%d",&x);
    printf("Enter y\n");
    scanf("%d",&y);
    for(i=1;i<=y;i++)
    {
        p=p*x;
    }
    printf("%d",p);
}