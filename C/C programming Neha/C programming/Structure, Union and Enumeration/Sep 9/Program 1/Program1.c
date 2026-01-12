#include<stdio.h>

struct Book{

	
	char bName[20];
	char authorName[20];
	int pages;
	double price;
};

void main(){

	struct Book bk = {"OS","AG",350,450.50};
	struct Book bk1 = {"OS","AG",350,450.50};

	printf("%p\n",&bk.bName);      //0x10
	printf("%p\n",&bk.authorName); //0x24
	printf("%p\n",&bk.pages);      //0x38
	printf("%p\n",&bk.price);      //0x40

	printf("%p\n",&bk1.bName);      //0x50
	printf("%p\n",&bk1.authorName); //0x64
	printf("%p\n",&bk1.pages);      //0x78
	printf("%p\n",&bk1.price);      //0x80
}

