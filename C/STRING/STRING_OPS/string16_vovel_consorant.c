// Enter string and count consorant and vovels.

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,v=0,c=0;
    printf("Enter string\n");
    gets(s);
    printf("Display only consorant\n");
    for(i=0;i<strlen(s);i++)
    {
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
        {  
                if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
                {
                    v++;
                }
                else{
                    c++;
                }
        }
    }
    printf("Total vovels=%d\n",v);
    printf("Total consarant=%d",c);
}