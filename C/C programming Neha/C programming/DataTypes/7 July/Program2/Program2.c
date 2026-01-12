#include <stdio.h>

void main(){
	int age = 21;
	float petPrice = 105.65;
	double gold = 10.4357839297;
	char wing = 'A';

	printf("%d\n", age);
	printf("%f\n", petPrice);
	printf("%f\n", gold);
	printf("%c\n", wing);

	printf("%ld\n", sizeof(int));      //4
	printf("%ld\n", sizeof(float));    //4
	printf("%ld\n", sizeof(double));   //8
	printf("%ld\n", sizeof(char));     //1
	printf("%ld\n", sizeof(void));     //1/0
}
