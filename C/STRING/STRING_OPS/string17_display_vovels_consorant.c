// enter string and display vovels and consorant differently.

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i;
    printf("Enter string\n");
    gets(s);
    printf("vowels from given string=\n");
    for(i=0;i<strlen(s);i++)
    {
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<'z'))
        {
            if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
            {
                printf("%c ",s[i]);
            }
        }
    }
    printf("\nconstorant from given string\n");
    for(i=0;i<strlen(s);i++)
    {
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
        {
           if(!(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'))
           {
               printf("%c ",s[i]);
           } 
        }
    }
}