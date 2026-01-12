//Conditional preprocessing

#include<stdio.h>

#define access 1

void main() {

	#if access
	printf("Access Permission\n");

	#else
	printf("Access Not Allowed\n");

	#endif
	printf("EOF\n");
}
