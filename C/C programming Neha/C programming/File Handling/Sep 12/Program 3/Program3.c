#include<stdio.h>

void main() {

	FILE *fp = fopen("success.txt","r");
	
	char ch;

	while((ch = fgetc(fp)) != EOF) {
	
		printf("%c",ch);
	}
}
