//Array of strings
#include<stdio.h>
#include<string.h>

void main() {

	//initialisation
	//Array of strings

	char arr1[3][10] = {"Neha","Ashutosh","Nivrutti"};

	printf("%p\n",arr1[0]);
	printf("%p\n",arr1[1]);
	printf("%p\n",arr1[2]);
	
	puts(arr1[0]);
	printf("%s\n",arr1[2]);

	strcpy(arr1[2],"Rahul");

	puts(arr1[0]);
	printf("%s\n",arr1[2]);

	//char arr2[2][10] = {{'R','A','M','\0'},{'S','A','M','\0'}};
}
