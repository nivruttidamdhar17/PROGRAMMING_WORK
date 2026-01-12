#include<stdio.h>

void main() {

	char ch1 = 'x';
	char ch2 = 'y';

	char *ptr = &ch1;

	printf("%p\n",ptr);   //0xae
	printf("%c\n",*ptr);  //x

//	printf("%p\n",(ptr+1.5));  //error   pointer can be added only with integer
//	printf("%c\n",*(ptr+1.5)); //error   pointer can be added only with integer
				   
	printf("%p\n",(ptr+'A'));   //0xef 
	printf("%c\n",*(ptr+'A'));  //garbage value or non printable character
}
