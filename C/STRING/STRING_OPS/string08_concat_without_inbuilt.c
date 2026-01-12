// concat two strings without using inbuilt function

#include<string.h>
#include<stdio.h>
int main()
{
    char s[100],r[100];
    int i,j;
    printf("Enter first string\n");
    gets(s);
    printf("Enter second string\n");
    gets(r);
    i=strlen(s);
    for(j=0;j<strlen(r);j++)
    {
        s[i]=r[j];
        i++;
    }
    s[i]='\0';
    printf("Concated string=%s",s);
}