#include<stdio.h>
#include<stdlib.h>

void danglingPtr(int x) {

	int *ptr1 = (int *)malloc(sizeof(int));

	*ptr1 = x;

	printf("%d\n",*ptr1);
	printf("%p\n",ptr1);

	int *ptr2 = ptr1;

	printf("%d\n",*ptr2);

	free(ptr1);

	printf("%d\n",*ptr2);

}
void main() {

	danglingPtr(20);
}
