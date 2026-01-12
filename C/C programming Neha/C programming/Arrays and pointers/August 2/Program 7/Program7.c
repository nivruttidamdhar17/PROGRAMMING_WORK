#include<stdio.h>

void main() {

	double d = 30.50;
	char ch = 'A';

	double *ptr1 = &d;    
	char *ptr2 = &ch;     

	printf("%p\n",ptr1);   //0x100
	printf("%p\n",ptr2);   //0x108

	printf("%lf\n",d);     //30.50
	printf("%c\n",ch);     //A

	printf("%lf\n",*ptr1); //30.50
	printf("%c\n",*ptr2);  //A
}
