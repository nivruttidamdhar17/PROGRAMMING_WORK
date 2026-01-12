#include<stdio.h>

void main(){

/*	
	int x = 10;
	int y;

	printf("x = %d\n",x); //10
	printf("y = %d\n",y); //0

	y = x;

	printf("x = %d\n",x); //10
	printf("y = %d\n",y); //10
*/

	int arr1[3] = {10,20,30};

	for(int i=0;i<3;i++){

		printf("%d\n",arr1[i]);

	}
	
	int arr2[3];
	arr2 = arr1;    //arr1 & arr2 considered as array to copy elements we have to put elements one by one
			//error assigment to expression with array type

	for(int i=0;i<3;i++){
	
		printf("%d\n",arr2[i]);
	}
}
