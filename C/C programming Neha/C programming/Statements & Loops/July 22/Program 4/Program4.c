#include<stdio.h>

void main(){

	int startNum, endNum;

	printf("Enter start number :\n");
	scanf("%d",&startNum);

	printf("Enter end number :\n");
	scanf("%d",&endNum);

	while(startNum <= endNum){
		if(startNum%4==0 && startNum%5==0){
			printf("%d\n",startNum);
		}
		startNum++;
	}
}
