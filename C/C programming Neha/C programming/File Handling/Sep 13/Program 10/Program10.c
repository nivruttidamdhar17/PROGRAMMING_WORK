#include<stdio.h>

void main() {

	FILE *fp = fopen("Demo.txt","r");

	char ch;

	int n = 10;
	int x = 0;

	while((ch = fgetc(fp)) != -1) {
		
		if(x == n)
			break;

		printf("%c\n",ch);
		x++;
	}
}
