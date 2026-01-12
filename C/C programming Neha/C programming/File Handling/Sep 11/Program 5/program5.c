#include<stdio.h>

void main() {

	FILE *fp = fopen("Biencaps.txt","r");

	char ch;

	fscanf(fp,"%c",&ch);
	printf("%c\n",ch);   //N

	fscanf(stdin,"%c",&ch);
	printf("%c\n",ch);   //

}



