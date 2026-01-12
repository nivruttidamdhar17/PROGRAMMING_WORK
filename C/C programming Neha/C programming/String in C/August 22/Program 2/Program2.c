///Function returning array
#include<stdio.h>

void fun(int (*ptr)[3]) {


}
void main() {

	int arr[] = {10,20,30};
	fun(&arr);
}
