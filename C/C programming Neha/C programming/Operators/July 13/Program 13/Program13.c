#include<stdio.h>

void main(){
	
	int x = 10,20,30;
	printf("%d\n",x);   //error identifier expected

	int y = {10,20,30};
	printf("%d\n",y);  //warning scalar initialisation o/p - 10

	int z = (10,20,30);
	printf("%d\n",z);   //comma operator considers the last value
}
