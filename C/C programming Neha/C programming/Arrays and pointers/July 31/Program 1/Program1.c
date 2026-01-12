#include<stdio.h>

void main(){

	int size;
	printf("Enter size of array :\n");
	scanf("%d",&size);

	int iarr[size];

	printf("Enter elements in the array:\n");

	for(int i=0;i<size;i++){
		
		scanf("%d",&iarr[i]);
	}

	int search;

	printf("Enter search element:\n");
	scanf("%d",&search);
	
	int flag = 0;

	for(int i=0;i<size;i++){
	
		if(search == iarr[i]){
		
			flag = 1;
		}		
	}
	if(flag==1){
		
		printf("Element found\n");
	}
	else{
	
		printf("Element not found\n");
	}
}
