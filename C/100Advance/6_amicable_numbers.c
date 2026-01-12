/*
amicable numbers:
220=1+2+3+4+5+10+11+20+22+44+55+110=284
284=1+2+4+71+142=220
*/
#include<stdio.h>
int sum(int);
int main()
{
    int a,b,p,q;
    printf("Enter 2 nos\n");
    scanf("%d%d",&a,&b);
    p=sum(a);
    q=sum(b);
    if(q==a && p==b)
    {
        printf("Given numbers are amicable");
    }
    else
    {
        printf("Given numbera are not amicable");
    }
}
int sum(int n)
{
    int i,s=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    return s;
}
