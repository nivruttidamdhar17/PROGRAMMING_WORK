//Big field

#include<stdio.h>
#pragma pack(1)

struct Demo {
	
	int x:1;    //6 asks for 1 bit gives minimum bytes
	int y;
};

void main() {

	printf("%ld\n",sizeof(struct Demo));
}
