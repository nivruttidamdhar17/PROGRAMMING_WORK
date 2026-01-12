//strupr--->string to upper case
#include<stdio.h>

char* mystrupr(char* str) {

	while(*str != '\0') {
	
		if(*str >= 97 && *str <= 122) {
		
			*str = *str - 32;
		}
		str++;
	}
	return str;
}

void main() {

	char str[20] = {'n','e','h','a','\0'};

	puts(str);

	mystrupr(str); 

	puts(str);
}
