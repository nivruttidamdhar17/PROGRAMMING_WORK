#include<stdio.h>

void main() {

	char carr[] = {'c','o','r','e','2','w','e','b'}; 

	char *str = "core2web";   //space in RO(read only) data

	printf("%s\n",carr);
	printf("%s\n",str);

 	carr[4] = '3';

	*str = '3';   //constant string

	printf("%s\n",carr);
	printf("%c\n",*str);   //segmentation fault
	printf("%c\n",*(carr+3));

}
