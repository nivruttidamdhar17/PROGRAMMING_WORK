//getw()
#include<stdio.h>

void main() {

	FILE *fp = fopen("Xyz.txt","w+");

	printf("%d\n",getw(fp));   //-1
	printf("%d\n",getw(fp));   //-1
	printf("%d\n",getw(fp));   //-1

}
