#include<stdio.h>

void main() {

	FILE *fp = fopen("C2W.txt","r");

	printf("%p\n",fp);   //not present hence nill
}
