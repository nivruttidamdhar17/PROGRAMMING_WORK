//Funtion gets(get string)
#include<stdio.h>

void main() {

	char name[20];

	printf("Enter name:\n");
	gets(name);  //dangerous function

	printf("%s\n",name);
}
