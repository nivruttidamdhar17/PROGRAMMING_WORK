#include<stdio.h>

void main(){
	
	char ch;
	printf("Enter character between A to E\n");
	scanf("%c",&ch);

	switch(ch){
		case 'A':
			printf("A\n");
			break;
		case 'B':
			printf("B\n");
			break;
		case 'C':
			printf("C\n");
			break;
		case 'D':
			printf("D\n");
			break;
		case 'E':
			printf("E\n");
			break;
		default :
			printf("Wrong input\n");

	}
}
