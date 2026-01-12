#include<stdio.h>

void main() {

	char arr[20];

	printf("Enter Player name:\n");
	gets(arr);  //Rohit Sharma

	puts(arr);

	char *str = arr;

	puts(str);   //Rohit Sharma
}
