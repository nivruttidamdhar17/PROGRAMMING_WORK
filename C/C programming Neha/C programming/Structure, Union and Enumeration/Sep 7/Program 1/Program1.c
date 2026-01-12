//Pointer to a structure --> Pointer pointing to a structure
#include<stdio.h>

struct Movie {

	char mName[20];
	int count;
	float price;
} obj1 = {"Kantara",5,1000.00};

void main() {

	struct Movie *sptr = &obj1;

	printf("%s\n",obj1.mName);
	printf("%d\n",obj1.count);
	printf("%f\n",obj1.price);

	printf("%s\n",(*sptr).mName);
	printf("%d\n",(*sptr).count);
	printf("%f\n",(*sptr).price);
	
}
