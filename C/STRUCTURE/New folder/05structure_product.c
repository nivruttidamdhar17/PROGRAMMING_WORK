// print structure product (pno, pname, quantity, price,total);
// enter n product detail and display them .
// 1)display only thos product where total price grater than 7000.
// 2)display only those product name is laptop.
// 3)display product detail by product number.

#include<stdio.h>
struct product
{
    int pno;
    char pname[30];
    int qty;
    float price;
    float total;
};
int main()
{
    struct product p[100];
    int i,n,no;
    printf("Enter n\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter product details\n");
        scanf("%d%s%d%f",&p[i].pno,&p[i].pname,&p[i].qty,&p[i].price);
        p[i].total=p[i].qty*p[i].price;
    }
    printf("Display product details\n");
    for(i=0;i<n;i++)
    {
        printf("%d %s %d %f %f\n",p[i].pno,p[i].pname,p[i].qty,p[i].price,p[i].total);
    }
    printf("Display poduct where total price > 7000\n");
    for(i=0;i<n;i++)
    {
        if(p[i].total>7000)
        {
            printf("%d %s %d %f %f\n",p[i].pno,p[i].pname,p[i].qty,p[i].price,p[i].total);
        }
    }
    printf("Display poduct where pname is laptop\n");
    for(i=0;i<n;i++)
    {
        if(strcmp(p[i].pname,"laptop")==0)
        {
            printf("%d %s %d %f %f\n",p[i].pno,p[i].pname,p[i].qty,p[i].price,p[i].total);
        }
    }
    printf("Enter prodduct no\n");
    scanf("&no");
    for(i=0;i<n;i++)
    {
        if(no==p[i].pno)
        {
            printf("%d %s %d %f %f\n",p[i].pno,p[i].pname,p[i].qty,p[i].price,p[i].total);
        }
    }
}