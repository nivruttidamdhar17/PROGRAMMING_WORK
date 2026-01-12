//enter no and display only even digits from that number
#include<stdio.h>
int main()
{
    int no,d;
    printf("enter no\n");
    scanf("%d",&no);
    printf("Even digits from given number\n");
    while(no!=0)
    {
        d=no%10;
        no=no/10;
        if(d%2==0)
        {
            printf("%d\n",d);
        }
    }
}