//accessing enum elements
#include<stdio.h>

enum Partners {

	PramodSir,
	Shri,
	Sachin,
	Akshay,
	Swapneel
};

void main() {

	enum Partners obj;

	printf("%ld\n",sizeof(obj));   //4 saglyat motha jo datatype ahe tyalach jaga milte(stored in int format)

	printf("%d\n",PramodSir);   //0
	printf("%d\n",Akshay);      //3
}

//enum la object banvaychi garaj nhi
