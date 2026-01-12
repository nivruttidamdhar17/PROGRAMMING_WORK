#include<stdio.h>

void main() {

	FILE *fp = fopen("success.txt","a");

	char compName[20] = "Byju's";

	fputs(compName,fp);
}
