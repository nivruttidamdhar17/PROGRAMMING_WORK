#include<stdio.h>

struct Movie {
	
	char mName[20];
	int noOfTick;
	float price;	
}obj1 = {"Kantara",2,300.00};

void fun() {

	struct Movie obj3 = {"Tiger mela ahe",7,1250.50};
	
	printf("%s\n",obj3.mName);
	printf("%d\n",obj3.noOfTick);
	printf("%f\n",obj3.price);
}
void main() {
	
	struct Movie obj2 = {"Drishyam",2,450.00};

	fun();

	printf("%s\n",obj1.mName);
	printf("%d\n",obj1.noOfTick);
	printf("%f\n",obj1.price);

	printf("%s\n",obj2.mName);
	printf("%d\n",obj2.noOfTick);
	printf("%f\n",obj2.price);
}
