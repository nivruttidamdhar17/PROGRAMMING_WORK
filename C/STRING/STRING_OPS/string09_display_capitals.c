// display only capital letters

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i;
    printf("Enter first string\n");
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            printf("Capitals letters from given string= %c\n",s[i]);
        }
    }
}

//homework
// display small numbers and display digit