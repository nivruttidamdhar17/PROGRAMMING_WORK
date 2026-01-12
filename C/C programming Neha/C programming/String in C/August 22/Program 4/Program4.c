#include<stdio.h>

void fun(int x,int y,int *ptradd,int*ptrsub) {

	*ptradd = x+y;
	*ptrsub = x-y;
}

void main() {

	int x  =10;
	int y = 20;

	int add,sub;
	fun(10,20,&add,&sub);

	//int ans = fun();
	//printf("%d\n",ans); //20 as we cannot return multiple values hence we will use pointer
	
	printf("%d\n",add);
	printf("%d\n",sub);
}
