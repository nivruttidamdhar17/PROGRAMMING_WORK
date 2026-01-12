#include<stdio.h>
#include<string.h>

struct OTT {

	char pName[20];
	int accounts;
	float price;
};

void main() {

	struct OTT obj1 = {"Netflix",3,499.50};

	struct OTT obj2;

	printf("Enter Platform name\n");
	gets(obj2.pName);

	printf("Total accounts\n");
	scanf("%d",&obj2.accounts);

	printf("Sub price\n");
	scanf("%f",&obj2.price);

	printf("%s\n",obj1.pName);
	printf("%d\n",obj1.accounts);
	printf("%f\n",obj1.price);

	printf("%s\n",obj2.pName);
	printf("%d\n",obj2.accounts);
	printf("%f\n",obj2.price);
}
