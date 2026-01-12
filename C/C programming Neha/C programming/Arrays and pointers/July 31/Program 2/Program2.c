#include<stdio.h>

void main(){

	int size;

	printf("Enter size of array:\n");
	scanf("%d",&size);

	int arr[size];

	printf("Enter elements in array:\n");
	
	for(int i=0;i<size;i++){
	
		scanf("%d",&arr[i]);
	}
	
	int flag = 0;

	for(int i=0;i<size;i++){

		if(arr[i]%4 == 0 && arr[i]%5==0){
	
			flag = 1;

		}
	}

	if(flag == 1){
	
		printf("Found\n");
	}
	else{
	
		printf("Not found\n");
	}
}
