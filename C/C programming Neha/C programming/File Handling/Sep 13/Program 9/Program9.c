#include<stdio.h>

void main() {

	FILE *fp = fopen("Demo.txt","r");

	char ch;
	int n = 10;

	while((ch = fgetc(fp)) != -1 && n != 0) {
	
		printf("%c",ch);
		n--;
	}
}

