#include<stdio.h>

void main() {

	FILE *fp = fopen("C2W.txt","r+");   //r+ --> r+w

	fprintf(fp,"Exception Handling\n");
}
