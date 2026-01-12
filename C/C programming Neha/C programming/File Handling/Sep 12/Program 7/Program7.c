#include<stdio.h>

void main(){

	FILE *fp = fopen("success.txt","r");

	printf("%c\n",fgetc(fp));   //I
	printf("%c\n",fgetc(fp));   //s

	fclose(fp);

	printf("%c\n",fgetc(fp)); //garbage value
}
