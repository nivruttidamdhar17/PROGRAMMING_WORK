#include<stdio.h>

void main() {

	int sum = 0;

	int arr[2][3][3]; //= {{1,2,3,4,5,6,7,8,9},{10,11,12,13,14,15,16,17,18}};

	printf("Enter Array elements:\n");
	
	for(int i=0;i<2;i++){
	
		for(int j=0;j<3;j++){
		
			for(int k=0;k<3;k++){
			
				scanf("%d",&arr[i][j][k]);
			}
		}
	}

	printf("Array elements are :\n");
	for(int i=0;i<2;i++){
	
		for(int j=0;j<3;j++){
		
			for(int k=0;k<3;k++){
			
				printf("%d ",arr[i][j][k]);
			}
			printf("\n");
		}
	}
}
