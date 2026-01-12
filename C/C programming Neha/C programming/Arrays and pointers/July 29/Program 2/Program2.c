#include<stdio.h>

void main(){

	int iarr[5] = {10,20,30,40,50};

	int x = 10;
	char ch = 'A';

	printf("%d\n",x);          //10
	printf("%c\n",ch);         //A

	printf("%p\n",&x);         //200
	printf("%p\n",&ch);        //300

	printf("%p\n",iarr);     //internally pointer   //100
	printf("%p\n",&iarr);    //pointer              100      wrong way to write
}
