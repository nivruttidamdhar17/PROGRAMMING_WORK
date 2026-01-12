//implementing two stacks in array   (top2-top1>1)

#include<stdio.h>

int top1 = 0;
int top2 = 0;
int size = 0;


int push1(int arr[]) {
	
	if(top1 == top2-1){
	
		return -1;
	} else{
	
		top1++;
		printf("Enter data\n");
		scanf("%d",&arr[top1]);

		return 0;
	}
}

int push2(int arr[]) {
	
	if(top1 == top2-1){
	
		return -1;
	} else{
	
		top2--;;
		printf("Enter data\n");
		scanf("%d",&arr[top2]);

		return 0;
	}
}

void main() {

	printf("Enter array size\n");
	scanf("%d",&size);	

	int arr[size];

	top1 = -1;
	top2 = size;

	char choice;

	do{
	
		printf("1.push1\n");
		printf("2.push2\n");
		printf("3.pop1\n");
		printf("4.pop2\n");

		int ch;

		printf("Enter choice\n");
		scanf("%d",&ch);

		switch(ch) {
		
			case 1: {
				int ret = push1(arr);
				if(ret == -1)
					printf("Overflow-1\n");
				}
				break;

			case 2: {
				int ret = push2(arr);
				if(ret == -1)
					printf("Overflow-2\n");
				}
				break;
			default :
				printf("Wrong coice\n");
		}

		getchar();
		printf("?\n");
		scanf("%c",&choice);
	}while(choice == 'Y' || choice == 'y');
}
