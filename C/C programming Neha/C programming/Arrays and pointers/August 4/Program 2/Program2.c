#include<stdio.h>

void main() {

	int arr[] = {10,20,30,40,50};


	int *ptr1 = &(arr[0]);
	int *ptr2 = &(arr[3]);

	printf("%d\n",*ptr1);  //10
	printf("%d\n",*ptr2);  //30

	//sub of pointers
	printf("%ld\n",ptr2-ptr1);  //3   (ptr2 - ptr1)/sizeof(DTP)
	printf("%ld\n",ptr1-ptr2);  //-3  (ptr1 - ptr2)/sizeof(DTP) 
}

//subtraction of two pointers is only possible when both pointers are pointing at the elements of same array
