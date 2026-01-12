#include<stdio.h>

int top = -1;   //array's illegal index
int size = 0;

int push(int stack[]) {

	if(top == size-1){
	
		printf("Stack overflow\n");
		return -1;
	} else {
		
		int data;

		printf("Enter data\n");
		scanf("%d",&data);

		top++;
		stack[top] = data;
		return 0;
	}
}

int pop(int *stack) {

	if(top == -1){
	
		printf("Stack underflow\n");
		return -1;
	} else {
		int data = *(stack+top);
		top--;
		return data;
	}
}

int peak(int stack[]) {

	if(top == -1){
	
		printf("Stack is empty\n");
		return -1;
	} else {
	
		return stack[top];
	}
}
void main() {

	printf("Enter size for stack :\n");
	scanf("%d",&size);

	int stack[size];
	char choice;

	do{
	
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Peak\n");

		int ch;
		printf("Enter your choice :\n");
		scanf("%d",&ch);

		switch(ch){
		
			case 1:
				push(stack);
				break;
			case 2: {
			       	int ret = pop(stack);
				if(ret != -1)
					printf("%d popped\n",ret);
			        }
				break;
			case 3:
				peak(stack);
				break;
			default :
				printf("Invalid entry\n");
				break;
		}
		getchar();
		printf("Do you want to continue ?\n");
		scanf("%c",&choice);

	}while(choice == 'Y' || choice == 'y');
}
