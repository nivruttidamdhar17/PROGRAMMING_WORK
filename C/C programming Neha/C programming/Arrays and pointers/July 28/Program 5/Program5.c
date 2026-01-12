#include<stdio.h>

void main(){

	int arr[] = {1,2,3,4,5};

	printf("%ld\n",sizeof(arr));   //20
	
	int arr1[] = {1,'A',3,'B',50.5};

	printf("%d\n", arr1[0]);    //1
	printf("%d\n", arr1[1]);    //65
	printf("%d\n", arr1[2]);    //3
	printf("%d\n", arr1[3]);    //66
	printf("%d\n", arr1[4]);    //50

}
