#include<stdio.h>

void main(){

	int iarr[5];

	printf("Enter elements in the array :\n");

	for(int i=0;i<5;i++){
	
		scanf("%d",&iarr[i]);
	}
	printf("Array elements are :\n");
	
	for(int i=0;i<5;i++){
	
		printf("%d\n",iarr[i]);
	}
}
