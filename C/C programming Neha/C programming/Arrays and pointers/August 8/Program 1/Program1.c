#include<stdio.h>

void main() {


	int row,col;

	printf("Enter row :\n");
	scanf("%d",&row);

	printf("Enter column :\n");
	scanf("%d",&col);

	int arr[row][col];
	
	int sum = 0;

	printf("Enter elements:\n");
	for(int i=0;i<row;i++){
	
		for(int j=0;j<col;j++){
		
			scanf("%d",&arr[i][j]);	
			sum = sum + arr[i][j];
		}
	}
	printf("Arry elements are :\n");

	for(int i=0;i<row;i++){
	
		for(int j=0;j<col;j++){
			
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("Sum of array  :%d\n",sum);

}
