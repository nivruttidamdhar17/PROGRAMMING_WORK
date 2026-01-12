//Armstroms is a number in which sum of cube of digits is equal to number then number is armstroms.
//153=3*3*3+5*5*5+1*1*1
//   =27+125+1
//   =153
//153=153
#include<stdio.h>
int main()
{
    int no,d,s=0,t;
    printf("Enter no\n");
    scanf("%d",&no);
    t=no;
    while(no!=0)
    {
        d=no%10;
        no=no/10;
        s=s+d*d*d;
    }
    if(s==t)
    {
        printf("number is armstros");
    }
    else
    {
        printf("number is not armstroms");
    }
}