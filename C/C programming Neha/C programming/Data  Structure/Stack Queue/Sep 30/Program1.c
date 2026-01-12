//implementing stack using array

#include<stdio.h>
#include<stdbool.h>


int top = -1;
int size = 0;
int flag = 0;

bool isFull() {

	if(top == size-1){
	
		return true;
	} else{
	
		return false;
	}
}

bool isEmpty() {

	if(top == -1)
		return true;
	else
		return false;
}

int push(int stack[]) {

	if(isFull()){
	
		return -1;
	} else {
		
		top++;
		printf("Enter data\n");
		scanf("%d",&stack[top]);
		return 0;                        //if chya block madhe asla tr condition false aste
	}
}

int pop(int stack[]){

	if(isEmpty()) {
		
		flag = 0;
		return -1;
	} else {

		int val =  stack[top];
		top--;
		flag = 1;
		return val;
	}
}

int peek(int stack[]){

	if(isEmpty()) {
		
		flag = 0;
		return -1;
	} else {

		int val =  stack[top];
		flag = 1;
		return val;
	}
}
void main() {

	printf("Enter size for stack :\n");
	scanf("%d",&size);
	
	int stack[size];

	char choice;

	do{
	
		printf("1. push\n");
		printf("2. pop\n");
		printf("3. peek\n");
		printf("4.isEmpty\n");
		printf("5.isFull\n");

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
