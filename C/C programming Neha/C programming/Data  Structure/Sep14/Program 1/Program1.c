#include<stdio.h>
#include<string.h>

struct CricPlayer {

	int jerNo;
	char pName[10];
	float sal;
} obj1 = {18,"Virat",5.0f};

void main() {

	struct CricPlayer obj2;

	obj2.jerNo = 45;
	strcpy(obj2.pName,"Rohit");
	obj2.sal = 5.0;

	printf("jerNo = %d\n",obj1.jerNo);
	printf("pName = %s\n",obj1.pName);
	printf("sal = %f\n",obj1.sal);

	printf("jerNo = %d\n",obj2.jerNo);
	printf("pName = %s\n",obj2.pName);
	printf("sal = %f\n",obj2.sal);
}
