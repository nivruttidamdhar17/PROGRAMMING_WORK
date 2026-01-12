#include<stdio.h>

void main() {

	char cName[] = {'V','i','r','a','t','\0'};

	char *fName1 = "Messi";

	char *fName2 = "NeymarJr";

	char *fName3 = "Messi";

	printf("%p\n",cName);
	printf("%p\n",fName1);
	printf("%p\n",fName2);
	printf("%p\n",fName3);
}
