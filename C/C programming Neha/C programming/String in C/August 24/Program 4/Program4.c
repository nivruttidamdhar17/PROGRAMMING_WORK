//Input string
#include<stdio.h>

void main() {

	char name[10];

	printf("Enter string :\n");
	
	//scanf("%s",name);  //reads only till space hence shud not use scanf to take input as a string

	scanf("%[^\n]",name); //Neha Gurav reads \n
	printf("%s\n",name);   //Neha Guarv
	
	scanf("%[^g]",name);  //reads till 'g'
	printf("%s\n",name); // Neha 

}
