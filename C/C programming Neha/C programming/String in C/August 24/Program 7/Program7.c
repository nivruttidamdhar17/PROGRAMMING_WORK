#include<stdio.h>

void main() {

	char pName[] = {'R','o','h','i','t','S','\0'};

	char *name = "ViratK";

	printf("%ld\n",sizeof(pName));   //7
	printf("%ld\n",sizeof(name));    //8
	//puts(pName);
	//puts(name);
}
