#include<stdio.h>
#include<stdlib.h>

typedef struct Student {

	int Id;
	float ht;
	struct Student *next;

}Stud;

void addNode(Stud *head) {

	Stud *newNode = (Stud*)malloc(sizeof(Stud));

	newNode->Id = 1;
	newNode->ht = 5.5;
	newNode->next = NULL;

	head = newNode;
	return head;
}

void printLL() {

	Stud * temp = head;

	while(temp != NULL) {
	
		printf("%d ",temp->Id);
		printf("%f ",temp->ht);
		temp = temp->next;
	}
	printf("\n");
}

void main() {

	Stud *head = NULL;
	
	head = addNode(head);
	printLL(head);
}
