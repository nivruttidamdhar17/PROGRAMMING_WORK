#include<stdio.h>

void main(){
	char ch;

	printf("Enter any character :\n");

	scanf("%c",&ch);

	printf("Entered character = %c\n",ch);

	if(ch >= 'A' && ch <= 'Z'){
		printf("Entered character is in UPPERCASE\n");
	}
	else if(ch >= 'a' && ch <= 'z'){
		printf("Entered character is in lowercase\n");
	}
	else{
		printf("Invalid entry\n");
	}

}
