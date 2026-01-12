#include<stdio.h>

void main() {

	FILE *fp = fopen("info.txt","w");
	
	printf("%ld\n",ftell(fp));    //0

	fprintf(fp,"Core2Web");

	printf("%ld\n",ftell(fp));    //8
	
	rewind(fp);    //Biencaps

	fprintf(fp,"Biencaps");   //Core2WebBiencaps
}
