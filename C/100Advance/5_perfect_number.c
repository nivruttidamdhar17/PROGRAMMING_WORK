#include<stdio.h>
void check(int);
void main()
{
    int no;
    printf("Enter no\n");
    scanf("%d",&no);
    check(no);
}
void check(int n)
{
    int i,s=0;
    for(i=1;i<n;i++)
    {
        if(n%1==0)
        {
            s=s+i;
        }
    }
    if(s==n)
    {
        printf("Number is perfect");
    }
    else{
        printf("Number is not perfect");
    }

}