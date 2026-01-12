#include<stdio.h>
#include<stdlib.h>

struct Node {

	int data; 
	struct Node *next;	
};

void main() {

	struct Node *head = NULL;
	//first Node
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->data = 10;
	newNode->next = NULL;
	
	//connecting first node..
	head = newNode;
	
	//second node
	newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->data = 20;
	newNode->next = NULL;
	
	//connecting second node
	head->next = newNode;
	
	//third node
	newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->data = 30;
	newNode->next = NULL;
	
	//connecting third node
	head->next->next = newNode;
	
	struct Node *temp = head; //head la firvaych nast mhnun temp

	while(temp != NULL){
	
		printf("%d  ",temp->data);
		temp = temp->next;
	}

}

