//implementing stack using singly linked list

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node {

	int data;
	struct Node *next;
};

int countNode = 0;
struct Node *head = NULL;

int eleCount() {

	struct Node *temp = head;
	int cunt = 0;

	while(temp != NULL){
	
		count++;
		temp = temp->next;	
	}	

	return count;
}

bool isFull() {
	
	if(eleCount() == countNode){
	
		return true;
	} else {
	
		return false;
	}
}
struct Node * createNode() {

	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

	printf("Enter data\n");
	scanf("%d",&newNode->data);

	newNode->next = NULL;

	return newNode;
}
void addNode() {

	struct Node *newNode = createNode();

	if(head == NULL){
	
		head = newNode;
	} else {
	
		struct Node *temp = head;

		while(temp->next != NULL){
		
			temp = temp->next;
		}
		temp->next = newNode;
	}
}
int push() {

	if(isFull()){
	
		return -1;
	} else {
	
		addNode();
		return 0;
	}
}
void main() {

	printf("Enter size for stack :\n");
	scanf("%d",&countNode);
	
	char choice;

	do{
	
		printf("1. push\n");
		printf("2. pop\n");
		printf("3. peek\n");
		printf("4. isEmpty\n");
		printf("5. isFull\n");

		int ch;
		printf("Enter choice\n");
		scanf("%d",&ch);

		switch(ch){
		
			case 1:{
				int ret;
				ret = push(stack);
				
				if(ret == -1)
					printf("Stack overflow\n");
				}
				break;

			case 2:
				{
				int ret;
				ret = pop(stack);

				if(flag == 0)
					printf("Stack undeflow\n");
			       	else 
				       printf("%d is popped\n",ret);
			        }
				break;

			case 3:
				{
				int ret;
				ret = peek(stack);

				if(flag == 0)
					printf("Stack empty\n");
				else
					printf("%d\n",ret);		
			        }
				break;

			case 4:
				{
				bool ret = isEmpty();
				if(ret)
					printf("Stack is empty\n");
				else
					printf("Stack is not empty\n");
			        }
				break;

			case 5:
				{
				bool ret = isFull();
				if(ret)
					printf("Stack is full\n");
				else
					printf("Stack is not full\n");
			        }
				break;
			default :
				printf("Wrong input\n");
		}
		getchar();
		printf("DO you want to continue?\n");
		scanf("%c",&choice);
	}while(choice == 'Y' || choice == 'y');	
}


