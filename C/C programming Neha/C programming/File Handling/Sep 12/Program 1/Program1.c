//getw()
#include<stdio.h>

void main() {

	FILE *fp = fopen("Demo.txt","w");

	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	int num4 = 40;

	//putw(num1,fp);
	
	//fprintf(fp,num1);   //string ch lagte nhitr segmentation fault
	
	printf("%d\n",getw(fp));    //-1 (EOF)
	printf("%d\n",EOF);    //-1 (EOF)

}
