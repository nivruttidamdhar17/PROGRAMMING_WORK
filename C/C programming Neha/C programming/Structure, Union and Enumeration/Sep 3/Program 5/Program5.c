#include<stdio.h>

struct CricPlayer {

	char pName[20];
	int jerNo;
	float avg;
}obj2 = {"MS Dhoni",7,45.25};


void main() {

	struct CricPlayer obj1 = {"Virat Kohli",18,55.88};
	
	printf("%ld\n",sizeof(struct CricPlayer));
	
	printf("%s\n",obj1.pName);
	printf("%d\n",obj1.jerNo);
	printf("%f\n",obj1.avg);

	printf("%s\n",obj2.pName);
	printf("%d\n",obj2.jerNo);
	printf("%f\n",obj2.avg);
}
