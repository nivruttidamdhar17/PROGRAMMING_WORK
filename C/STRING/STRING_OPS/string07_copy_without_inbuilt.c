// copy string from one to another without using inbuilt function.

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],r[100],i;
    printf("Enter string\n");
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        r[i]=s[i];
    }
    r[i]='\0';
    printf("copied string=%s ",r);
}