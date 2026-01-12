#include<stdio.h>

struct Demo {

	int x:4;    //bit field cha vapar tevha ch karaycha jevha aplyala structure madhlya ekhdaya element la restrict karaycha asel upto that bit
};

void main() {

	struct Demo obj = {16};
}
