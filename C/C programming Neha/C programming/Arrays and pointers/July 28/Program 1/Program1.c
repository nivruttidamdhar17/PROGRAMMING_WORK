#include<stdio.h>

void main(){

	/*
	float friendPack1;
	float friendPack2;
	float friendPack3;
	float friendPack4;
	float friendPack5;
	*/

	float friendPack[5];

	printf("Enter package :\n");
	scanf("%f",&friendPack[0]);
	scanf("%f",&friendPack[1]);
	scanf("%f",&friendPack[2]);
	scanf("%f",&friendPack[3]);
	scanf("%f",&friendPack[4]);

	printf("Friend1 Package : %f\n", friendPack[0]);
	printf("Friend2 Package : %f\n", friendPack[1]);
	printf("Friend3 Package : %f\n", friendPack[2]);
	printf("Friend4 Package : %f\n", friendPack[3]);
	printf("Friend5 Package : %f\n", friendPack[4]);
}
