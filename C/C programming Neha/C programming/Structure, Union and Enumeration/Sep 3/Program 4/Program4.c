//assignment to structure

#include<stdio.h>

struct CricPlayer {

	char pName[20] = "Virat Kohli";
	int jerNo = 18;
	float avg = 50.88;
};

void main() {
	
	extern int x = 10;

	printf("%ld\n",sizeof(struct CricPlayer)); 
}

//assignment to struct is not possible in this way
