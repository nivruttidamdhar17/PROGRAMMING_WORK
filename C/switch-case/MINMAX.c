#include<stdio.h>
int main()
{
    int a,b,no,ch;
    printf("1.max\n2.min\n3.even odd\n4.+ve _ve\n");
    printf("enter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("enter two numbers\n");
            scanf("%d%d",&a,&b);
            if(a>b){
            printf("%d is maximum",a);
            }
            else{
                printf("%d is maximum",b);
            }
            break;
        case 2:
            printf("enter two number\n");
            scanf("%d%d",&a,&b);
            if(a>b)
            {
                printf("%d is minimum",b);
            }
            else{
                printf("%d is minimum",a);
            }
            break;
        case 3:
            printf("enter a number\n");
            scanf("%d",&no);
            if(no%2==0)
            {
                printf("%d is even",no);
            }
            else{
                printf("%d is odd",no);
            }
            break;
        case 4:
            printf("enter a number\n");
            scanf("%d",&no);
            if(no>=0){
                printf("%d is +ve",no);
            }
            else
            {
                printf("%d is -ve",no);
            }
            break;
        default:
            printf("enter valid number");
            break;
    }
}