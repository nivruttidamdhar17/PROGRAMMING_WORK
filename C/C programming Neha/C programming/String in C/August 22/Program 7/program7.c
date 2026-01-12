#include<stdio.h>


int x = 10;    //non bss
int y;         //bss

void main() {

	const int a = 30;   //stack locked constant
	char *str = "Neha";   //RO data also constant butnpointer in main stack
}


