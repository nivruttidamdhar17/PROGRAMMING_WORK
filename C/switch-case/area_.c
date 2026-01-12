// find area of 1)circle 2)triangle 3)square 4)rectangle.
#define pi 3.14
#include<stdio.h>
int main()
{
    float r,l,b,a;
    int ch;
    printf("1.circle\n2.triangle\n3.square\n4.rectangle\n");
    printf("enter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("enter the value of radius\n");
                scanf("%f",&r);
                a=pi*r*r;
                printf("Area of circle=%f\n",a);
                break;
        case 2: printf("Enter value of length(l),and base(b)\n");
                scanf("%f%f",&l,&b);
                a=0.5*l*b;
                printf("Area of triangle=%f\n",a);
                break;
        case 3: printf("Enter the value of side of square\n");
                scanf("%f",&l);
                a=l*l;
                printf("Area of square=%f\n",a);
                break;
        case 4: printf("Enter length and breadth of rectangle\n");
                scanf("%f%f",&l,&b);
                a=l*b;
                printf("Area of rectangle=%f\n",a);
                break;
        default :
                printf("enter valid choice\n");
    }
}