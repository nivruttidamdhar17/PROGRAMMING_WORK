#include<stdio.h>

void main() {

	char *str = "Virat";
	printf("%c\n",str[2]);   //r

	str[2] = 'K'; 
	printf("%c\n",str[2]);  //RO segmentation fault (str[2] - address of str[2]+DTP may go to out of memory)
}
