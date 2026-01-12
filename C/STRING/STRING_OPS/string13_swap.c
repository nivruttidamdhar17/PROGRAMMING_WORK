// Enter string and convert small letters to capital letters.

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i;
    printf("Enter string\n");
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
        else if(s[i]>='a'&&s[i]<='z')
        {
            s[i]=s[i]-32;
        }
        else{}
    }
    printf("Capital string=%s\n",s);
}