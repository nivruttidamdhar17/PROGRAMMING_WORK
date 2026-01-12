#include<stdio.h>
int a = 10;         //global variable
void fun(){
	int x = 20; //local varible
	printf("In Fun\n");
}
void main(){
	int x = 30; //local variable
	printf("Start main\n");
	fun();      // call to fun function
	printf("End main\n");
}
