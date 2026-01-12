#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],r[100];
    printf("Enter first string\n");
    gets(s);
    printf("Enter second string\n");
    gets(r);
    if(strcmp(s,r)==0)
    {
        printf("Both are equal\n");
    }
    else
    {
        printf("Both strings are not equal\n");
    }
}