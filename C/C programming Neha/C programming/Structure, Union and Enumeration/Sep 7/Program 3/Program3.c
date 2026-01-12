//Nested Structure  IMP example
#include<stdio.h>
#include<string.h>

struct MovieInfo {
	
	char actor[20];

	float rating;
};

struct Movie {

	char mName[20];
	
	struct  MovieInfo obj1;

	/*struct MovieInfo{
	
		char actor[20];    //write above
		
		float rating;
	}; */
};
void main() {

	struct Movie obj2;


	strcpy(obj2.mName,"kantara");
	strcpy(obj2.obj1.actor,"Rishabh");
	obj2.obj1.rating = 9.7;

	printf("%s\n",obj2.mName);
	printf("%s\n",obj2.obj1.actor);
	printf("%f\n",obj2.obj1.rating);
}

//one more way to is : 
//struct Movie obj2 = {"Tumbbad",{"SonanShah",8.8}};
