#include<stdio.h>

void main(){
	int x = 0;
	int y = 5;
	int ans;

	ans = x++ || ++y;
	printf("%d\n",ans);   //1
	printf("%d\n", x);    //1
	printf("%d\n", y);    //6
	
	ans = x++ && y++;
	printf("%d\n",ans);   //1
	printf("%d\n", x);    //2
	printf("%d\n", y);    //7

}
