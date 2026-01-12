#include<stdio.h>

void main(){
	int x = 8;
	int ans;

	printf("%d\n",x);          //8
	ans = ++x + ++x + ++x + ++x;
	printf("%d\n",x);          //12
	printf("%d\n",ans);        //43

}
