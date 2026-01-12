#include<stdio.h>
int main()
{
    int x,y,i,s=1;
    printf("Enter base number(x)\n");
    scanf("%d",&x);
    printf("enter exponent(y)\n");
    scanf("%d",&y);
    for(i=1;i<=y;i++)
    {
        s=s*x; 
    }
    printf("%d",s);
}