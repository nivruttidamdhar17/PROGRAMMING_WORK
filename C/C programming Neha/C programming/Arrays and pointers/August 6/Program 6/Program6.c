//Dangling pointer(PART 1)
#include<stdio.h>

int a = 10;
int b;
int *iptr = 0; ///wild pointer just works as a variable

void fun() {

	int x = 30;

	printf("%d\n",a);   //10
	printf("%d\n",b);   //0
	
	iptr = &x;   //address of x

	//printf("%d\n",*iptr); //segmentation fault(core dumped)
	printf("%p\n",iptr);  //nill   //300
	printf("%d\n",*iptr);   //30


}
void main() {
	
	int y = 40;

	printf("%d\n",a);   //10
	printf("%d\n",b);   //0

	fun();
	//dangling pointer
	printf("%p\n",iptr);  //address of x 300 even after fun() is poped stull iptr stores address of x(DANGLING POINTER)

}
