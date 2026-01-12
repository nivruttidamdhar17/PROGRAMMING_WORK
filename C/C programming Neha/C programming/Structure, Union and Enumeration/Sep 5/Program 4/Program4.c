//object initialisation using malloc
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct IPL {

	char sName[20];
	int tTeams;
	float price;
};
void main() {

	//int *ptr = (int *)malloc(sizeof(int));
	struct IPL *ptr = (struct IPL *)malloc(sizeof(struct IPL));

	strcpy((*ptr).sName,"Tata");
	ptr->tTeams = 8;
	(*ptr).price = 10;
}

