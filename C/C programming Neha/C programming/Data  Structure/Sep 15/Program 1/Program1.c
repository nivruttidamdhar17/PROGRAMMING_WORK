//Malloc revision
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Company{

	char cName[20];
	int empCount;
	float revenue;
};

void main() {
	
	struct Company *cptr = (struct Company*)malloc(sizeof(struct Company));

	strcpy(cptr->cName,"Veritas");
	cptr->empCount = 700;
	(*cptr).revenue = 150.50;  //cptr->revenue = 700;	
	
	printf("Company name = %s\n",cptr->cName);
	printf("Employee count = %d\n",cptr->empCount);
	printf("Revenue = %f\n",cptr->revenue);
}
