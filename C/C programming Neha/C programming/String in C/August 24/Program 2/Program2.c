#include<stdio.h>

void main() {

	char *str = "Virat";    //constnt string hence initialise it first

	printf("Enter String :\n");
	scanf("%s",str);

	printf("%s\n",str);   //segmentation fault
}
