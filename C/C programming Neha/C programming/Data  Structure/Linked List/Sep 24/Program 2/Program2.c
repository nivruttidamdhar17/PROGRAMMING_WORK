//insertion in Linked list
#include<stdio.h>
#include<stdlib.h>

struct Node{

	int data;
	struct Node* next;
};

void linkedListTraversal(struct Node* ptr) {

	while(ptr != NULL) {
		
		printf("Element : %d\n",ptr->data);
		ptr = ptr->next;
	}
}

struct Node* insertAtFirst(struct Node *head,int data) {
	
	struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr->next = head;
	head = ptr;
	ptr->data = data;
	return head;
}

struct Node* insertAtPos(struct Node *head,int data,int pos) {

	struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
	
	struct Node *temp = head;

	int i = 0;

	while(i != pos-1){
	
		temp = temp->next;
		i++;
	}
	ptr->data = data;
	ptr->next = temp->next;
	temp->next = ptr;

	return head;
}

struct Node* insertAtEnd(struct Node *head,int data) {

	struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));

	ptr->data = data;
	struct Node * temp = head;
	while(temp->next != NULL){
		
		temp = temp->next;
	}

	temp->next = ptr;
	ptr->next = NULL;

	return head;
}
void main() {

	struct Node* head = (struct Node *)malloc(sizeof(struct Node));

	struct Node* second = (struct Node *)malloc(sizeof(struct Node));

	struct Node* third = (struct Node *)malloc(sizeof(struct Node));

	head->data = 10;
	head->next = second;

	second->data = 20;
	second->next = third;

	third->data = 30;
	third->next = NULL;
	
	linkedListTraversal(head);
	printf("\n");
//	head = insertAtFirst(head,40);  
//	linkedListTraversal(head);

//	head = insertAtPos(head,50,2);
//	linkedListTraversal(head);

//	head = insertAtEnd(head,60);
//	linkedListTraversal(head);


}
