#include<stdio.h>

void main(){
	int x = 5;
	int ans;
	
	ans = x++;
	printf("%d\n", x);       //6
	printf("%d\n", ans);     //5
}
