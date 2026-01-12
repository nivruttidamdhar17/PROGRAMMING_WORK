//Check the number is palindrome or not.
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
        s=s*10+d;
    }
    if(s==t)
    {
        printf("It is palindrome");
    }
    else{
        printf("it is not palindrome");
    }
}