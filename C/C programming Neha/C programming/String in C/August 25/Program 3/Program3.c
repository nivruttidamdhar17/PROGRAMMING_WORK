#include<stdio.h>

void printString(char str1[]);
void stringPrint(char *str2);

void main() {

	char arr[20];

	printf("Enter your name:\n");
	gets(arr);

	printString(arr);
	stringPrint(arr);
}

void printString(char str1[]){

	puts(str1);
}

void stringPrint(char *str2){

	puts(str2);
}

//char str1[] and char *str2 are same 
