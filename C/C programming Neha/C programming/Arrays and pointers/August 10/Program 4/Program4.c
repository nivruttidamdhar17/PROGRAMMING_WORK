#include<stdio.h>

void main() {

	char carr1[3] = {'A','B','C'};

	char carr2[3] = {'D','E','F'};

	char *ptr1 = &carr1[1];
	char *ptr2 = carr1;
	char (*ptr3)[3] = &carr1;	
/*
	printf("%c\n",**ptr3);  //A
	ptr3++;
	printf("%c\n",**ptr3);  //D

	printf("%c\n",*ptr1);  //B
	ptr1++;
	printf("%c\n",*ptr1);  //C
			       */
	printf("%c\n",**ptr3);
	printf("%c\n",**ptr3+2);

}
