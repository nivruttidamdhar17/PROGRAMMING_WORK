//doubly linked list
#include<stdio.h>
#include<stdlib.h>

void* malloc(size_t);

typedef struct Node{

	struct Node *prev;
	int data;
	struct Node *next;
}Node;

Node *head = NULL;

Node* createNode() {

	Node *newNode = (Node *)malloc(sizeof(Node));

	newNode->prev = NULL;

	printf("Enter data:\n");
	scanf("%d",&newNode->data);

	newNode->next = NULL;

	return newNode;
}
void addNode() {

	Node *newNode = createNode();
	
	if(head == NULL) {
	
		head = newNode;
	}else{
	
		Node *temp = head;

		while(temp->next != NULL){
		
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->prev = temp;
	}
}


void addFirst() {

	Node *newNode = createNode();

	if(head ==NULL) {
	
		head = newNode;
	}else {
	
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
	}
}

int countNode() {

	Node *temp = head;

	int count = 0;
	while(temp != NULL){
	
		count++;
		temp = temp->next;
	}
	return count;
}

int addAtPos(int pos) {

	int count = countNode;	

	if(pos <= 0 || pos >= count+2){
	
		printf("Invalis node positon\n");
		return -1;
	}else{
	
		if(pos == count+1){
		
			addNode();
		}else if(pos == 1){
		
			addFirst();
		}else{
		
			Node *newNode = createNode();
			Node *temp = head;

			while(pos-2) {
			
				temp = temp->next;
				pos--;
			}

			newNode->next = temp->next;
			newNode->prev = temp;
			temp->next->prev = newNode;
			temp->next = newNode;
		}

		return 0;
	}
}

void printDLL() {

	Node *temp = head;

	while(temp->next != NULL){
	
		printf("|%d|",temp->data);
		temp = temp->next;
	}
	printf("|%d|\n",temp->data);
}

void main() {
	
	int countNode;

	printf("Enter node count:\n");
	scanf("%d",&countNode);

	for(int i=1;i<=countNode;i++) {
	
		addNode();
	}

	printDLL();

	addFirst();

	printDLL();

	int pos;
	printf("Enter node position:\n");
	scanf("%d",&pos);

	addAtPos(pos);
		printf("1. addNode\n");

	printDLL();
}
