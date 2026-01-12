#include<stdio.h>

void passArr(int (*ptr)[]) {


}
void main() {

	int arr[3][3] = {10,20,30,40,50,60,70,80,90};

	passArr(arr);
}
