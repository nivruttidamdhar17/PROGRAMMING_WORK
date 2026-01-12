#include<stdio.h>

void main(){

	int iarr[5] = {10,20,30,40,50};
	

	//printf("%d\n",iarr);   //iarr considers as address
	printf("%p\n",&iarr); //to specify address use format specifier as %p for pointer, it will print address at which this array is stored
	
}

