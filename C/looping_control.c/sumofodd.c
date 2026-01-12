//enter no and do sum of all odd digits.
#include<stdio.h>
int main()
{
    int no,d,s=0;
    printf("Enter No\n");
    scanf("%d",&no);
    printf("Sum of all odd digits:\n");
    while(no!=0)
    {
        d=no%10;
        no=no/10;
        if(d%2!=0)
        {
            s=s+d;
        }
    }
    printf("%d",s);
}