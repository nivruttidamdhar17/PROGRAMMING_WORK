#include<stdio.h>
int main()
{
    int no,d,s=0;
    printf("Enter Nunber\n");
    scanf("%d",&no);
    while(no!=0)
    {
        d=no%10;
        no=no/10;
        s=s*10+d;
    }
    printf("reverse of number=%d\n",s);
}