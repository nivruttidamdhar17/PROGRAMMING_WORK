#include<stdio.h>

void main(){

	int arr1[3] = {10,20,30};

	int arr2[3] = {10,25,30};
	
	int flag = 0;
	for(int i=0;i<3;i++){
		
		if(arr1[i] == arr2[i]){
		
			flag = 1;

		}else {
		
			flag = 0;
			break;
		}
	}
	if(flag == 0){
	
		printf("Unequal array\n");
	}else{
	 	printf("Equal\n");
	}
}
