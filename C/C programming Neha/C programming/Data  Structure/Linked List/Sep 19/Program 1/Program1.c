#include<stdio.h>
#include<stdlib.h>

typedef struct Student {

	int Id;
	float ht;
	struct head *next;
}Stud;

Stud * head = NULL;

void addNode() {
	
	Stud *newNode = (Stud*)malloc(sizeof(Stud));

	newNode->Id = 1;
	newNode->ht = 5,5;
	newNode->next = NULL;
	head = newNode;
}

void printLL() {

	Stud *temp = head;

	while(temp != NULL) {
	
		printf("%d = ",temp->Id);
		printf("%f ",temp->ht);
		temp = temp->next;
	}
}

void main() {

	addNode();
	printLL();

	addNode();
	printLL();
}
