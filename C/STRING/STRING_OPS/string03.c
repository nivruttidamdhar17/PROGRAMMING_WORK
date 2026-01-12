// copiying of string ("strcpy()")
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],r[100];
    printf("Enter string\n");
    gets(s);
    strcpy(r,s);
    printf("copied string=%s\n",r);
}