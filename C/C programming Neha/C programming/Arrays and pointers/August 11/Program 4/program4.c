#include<stdio.h>

void main() {

	int arr[3][3] = {10,20,30,40,50,60,70,80,90};

	printf("%p\n",&arr);  //100  Purn array cha address
	printf("%p\n",arr);   //100  Pahila row cha address
	printf("%p\n",arr[0]);  //100 pahila row chya pahila element cha address
	printf("%p\n",arr[1]);  //112  dusrya row chya pahila element cha address
	printf("%p\n",&arr[0]);  //100  arr[0] pahila array cha address
	printf("%p\n",&arr[1]);  //112  arr[1]  dusrya row cha address
	
	printf("%d\n",arr[1][1]);     //50
	printf("%d\n",*(*(arr+1)+1));  //50
	printf("%d\n",arr[2][1]);    //80
	printf("%d\n",*(*(arr+2)+1));  //80
				    
}
