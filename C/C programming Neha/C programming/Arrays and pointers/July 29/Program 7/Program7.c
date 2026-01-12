#include<stdio.h>

void main(){
	
	int iarr[5];
	int sum = 0;

	printf("Enter elements in the array :\n");

	for(int i=0;i<5;i++){
	
		scanf("%d",&iarr[i]);
	}

	printf("sum of elements in the array is:\n");

	for(int i=0;i<5;i++){
	
		sum = sum + iarr[i];
	}
	printf("%d\n",sum);

}
