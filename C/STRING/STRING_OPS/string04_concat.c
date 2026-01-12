// concat of 2 strings
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],r[100];
    printf("Enter first string\n");
    gets(s);
    printf("Enter second string\n");
    gets(r);
    strcat(s,r);
    printf("concat string=%s\n",s);
}