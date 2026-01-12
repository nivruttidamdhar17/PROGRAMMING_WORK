//delete node

#include<stdio.h>
#include<stdlib.h>

struct Demo {

	int data;
	struct Demo *next;
};

struct Demo *head = NULL;


struct Demo* createNode() {

	struct Demo *newNode = (struct Demo*)malloc(sizeof(struct Demo));

	printf("Enter data:\n");
	scanf("%d",&newNode->data);

	newNode->next = NULL;

	return newNode;
}

void addNode() {

	struct Demo *newNode = createNode();

	if(head == NULL) {
	
		head = newNode;
	}else{
	
		struct Demo *temp = head;

		while(temp->next != NULL) {
		
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

void addFirst() {

	struct Demo *newNode = createNode();

	if(head ==NULL) {
	
		head = newNode;
	}else{
	
		newNode->next = head;
		head = newNode;
	}
}

void addAtPos(int pos) {

	struct Demo *newNode = createNode();

	struct Demo *temp = head;

	while(pos-2) {
	
		temp = temp->next;
		pos--;
	}
	newNode->next = temp->next;
	temp->next = newNode;
}
void printLL() {

	struct Demo *temp = head;

	while(temp != NULL) {
	
		printf("|%d|",temp->data);
		temp = temp->next;
	}
}
void main() {

	do{
		printf("1. addNode\n");
		printf("2. addFirst\n");
		printf("3. addAtPos\n");
		printf("4. printLL\n";
	
		int ch;
		printf("Enter choice:\n");
		scanf("%d",&ch);

		switch(ch) {
		
			case 1:
				addNode();
				break;
			case 2:
				addFirst();
				break;
			case 3:
				int pos;
				printf("Enter no fo position\n");
				scanf("%d",&pos);

				addAtPos();
				break;
			case 4:
				printLL();
				break;
			default:
				printf("Wrong choice\n");
		}

		char choice;
		printf("DO you want to continue\n");
		scanf("%c",&choice);

	}while(choice == 'y' || choice == 'Y');
}
