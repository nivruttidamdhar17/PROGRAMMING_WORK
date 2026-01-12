// Count capital, small, digits and other symbols.

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int cp=0,sm=0,dg=0,ot=0,i;
    printf("Enter string\n");
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            cp++;
        }
        else if(s[i]>='a'&&s[i]<='z')
        {
            sm++;
        }
        else if(s[i]>'0'&&s[i]<='9')
        {
            dg++;
        }
        else
        {
            ot++;
        }
    }
    printf("Total capital= %d\n",cp);
    printf("Total small=%d\n",sm);
    printf("Total digit=%d\n");
    printf("Total other symbols=%d\n",ot);
}