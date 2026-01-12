#include<stdio.h>

char* mystrncpy(char *dest,const char *src,int n) {

	while(n != 0) {
	
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return dest;
}
void main() {

	char *str = "Neha Gurav";

	char name[15];

	int num = 4;

	puts(str);
	puts(name);

	mystrncpy(name,str,num);

	puts(name);
}
