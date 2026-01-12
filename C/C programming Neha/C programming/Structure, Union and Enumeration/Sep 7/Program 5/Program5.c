#include<stdio.h>
#include<string.h>

struct Movie {

	char mName[20];
	struct MovieInfo {
	
		char actor[20];
		float imdb;
	}obj1;
};

void main() {

	struct Movie obj2 = {"RHTDM",{"R MAdhavan",8.5}};
}
