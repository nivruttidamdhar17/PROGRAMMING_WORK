#include<stdio.h>
#include<stdlib.h>

typedef struct Student {

	int Id;
	float ht;
	struct Student *next;
}Stud;

void main() {

	Stud *head = NULL;
	///1st Node
	Stud *newNode = (Stud*)malloc(sizeof(Stud));

	newNode->Id = 1;
	newNode->ht = 5.5;
	newNode->next = NULL;

	head = newNode;

	//2nd Node
	newNode = (Stud*)malloc(sizeof(Stud));
	
	newNode->Id = 2;
	newNode->ht = 6.5;
	newNode->next = NULL;

	head->next = newNode;

	//3rd Node
	newNode = (Stud*)malloc(sizeof(Stud));

	newNode->Id = 3;
	newNode->ht = 7.5;
	newNode->next = NULL;

	head->next->next = newNode;

	Stud *temp = head;
	while(temp!=NULL){
	
		printf("Student Id = %d\n",temp->Id);
		printf("Height = %f\n",temp->ht);
		temp = temp->next;
	}


}
