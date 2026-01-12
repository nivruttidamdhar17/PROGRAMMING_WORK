#include<stdio.h>

void main() {

	char pName[] = {'R','o','h','i','t','S','\0','v','a','d','a'};   //string kuthe sampli he sangnya sathi \0 vapartat
	char *name = "ViratK";

	printf("%ld\n",sizeof(pName));  //11
	puts(pName);          //RohitS
	for(int i=0;i<11;i++){
	
		printf("%c",pName[i]);   //RohitSvada
	}

	printf("%s\n",pName);
	printf("\n");
	for(int i=0;i<7;i++){
	
		printf("%c",name[i]);   //*(name+i)
	}
}

//user kdhun string ghyaychi asel tr array vapryach ani constant value asel tr char* vapraych
