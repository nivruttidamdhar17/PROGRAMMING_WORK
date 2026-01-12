#include <stdio.h>

void swap(int **c, int **d)
{
	int *tmp = *c;
	*c =*d;
	*d=tmp;
}
int main()
{
	int a,b;
	a=4;
	b=5;
	int *x=&a,*y=&b;
	printf("\n%d, %d",*x,*y);
	swap(&x,&y);
	printf("\n %d, %d",*x,*y);
	printf("\n a = %d, b= %d",a,b);
	return 0;
}