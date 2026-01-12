#include<stdio.h>

void main() {

	int x = 10;

	int *ptr1 = &x;
	int *ptr2 = x;

	printf("%p\n",ptr1);    //100
	printf("%p\n",ptr2);    //0xa

	printf("%d\n",*ptr1);   //10
	printf("%d\n",*ptr2);    //segmentation fault core dumped   
	printf("End main\n");    //not goes forward after segmentation fault process is killed
}

//If we try to access data of another process segmentation fault occurs hence we should never give variable to pointer
