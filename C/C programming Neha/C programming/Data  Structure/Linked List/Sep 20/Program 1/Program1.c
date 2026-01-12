#include<stdio.h>
#include<stdlib.h>

typedef struct Employee{

	char name[20];
	int id;
	struct Eployee *next;
} Emp;

Emp *head = NULL;

void addNode(){

	Emp *newNode = (Emp *)malloc(sizeof(Emp));
	
	getchar();

	printf("Enter name :\n");
	//fgets(newNode->name,20,stdin);
	//gets(newNode->name);
	
	char ch;
	int i = 0;

	while((ch = getchar())!= '\n') { 
	
		(*newNode).name[i] = ch;
		i++;
	}

	printf("Enter Id :\n");
	scanf("%d",&newNode->id);

	newNode->next = NULL;

	if(head == NULL) {
	
		head = newNode;
	}else{
	
		Emp *temp = head;

		while(temp->next != NULL) {
		
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

void printLL() {

	Emp *temp = head;

	while(temp != NULL) {
	
		printf("|%s->",temp->name);
		printf("%d|",temp->id);

		temp = temp->next;
	}
}
void main() {

	int nodeCount;

	printf("Enter Node Count :\n");
	scanf("%d",&nodeCount);

	for(int i=1;i<=nodeCount;i++)  {
	
		addNode();
	}

	printLL();
}
