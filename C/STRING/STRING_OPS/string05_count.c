// count no of characters
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int l;
    printf("Enter string\n");
    gets(s);
    l=strlen(s);
    printf("total characters= %d\n",l);
}