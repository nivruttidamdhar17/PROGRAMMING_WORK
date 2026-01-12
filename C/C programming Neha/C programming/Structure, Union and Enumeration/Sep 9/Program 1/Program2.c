#include<stdio.h>
#include<string.h>
union Book{

	
	char bName[20];
	char authorName[20];
	int pages;
	double price;
};

void main(){

	union Book bk;// = {"OS","AG",350,450.50};

	strcpy(bk.bName,"OS");
	printf("%s\n",bk.bName);

	strcpy(bk.authorName,"Ag");
	printf("%s\n",bk.authorName);

	bk.pages = 350;
	printf("%d\n",bk.pages);

	bk.price = 450.50;
	printf("%f\n",bk.price);

	/*
	printf("%p\n",&bk.bName);      //0x10
	printf("%p\n",&bk.authorName); //0x10
	printf("%p\n",&bk.pages);      //0x10
	printf("%p\n",&bk.price);      //0x10
				       
	printf("%s\n",bk.bName);
	printf("%s\n",bk.authorName);
	printf("%d\n",bk.pages);
	printf("%f\n",bk.price); */
}


//union ekalch memory deta(jyala sarvat mothi jaga lagte tyala) , eka veli eka la ch data assign karav lagta
