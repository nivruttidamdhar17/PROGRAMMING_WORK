
#include<stdio.h>

void main() {
/*
	char arr[10];

	printf("Enter player name :\n");
	gets(arr);

	puts(arr);
	*/

	printf("Enter player name :\n");

	char *str;
	gets(str);

	puts(str);  //segmentation fault
}
