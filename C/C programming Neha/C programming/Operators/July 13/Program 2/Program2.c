#include<stdio.h>

void main(){
	int x = 8;
	int y = 11;
	int ans;

	ans = ++x || ++y;
	printf("%d\n", ans);     //1
	printf("%d\n", x);       //9
	printf("%d\n", y);       //11

	ans = x++ && ++y;
	printf("%d\n", ans);    //1
	printf("%d\n", x);      //10
	printf("%d\n", y);      //12

}
