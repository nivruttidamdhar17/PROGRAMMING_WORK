// Reverse characters from given file.

#include<stdio.h>
int main()
{
    FILE *fr;
    char s[1000];
    int i=0;
    fr=fopen("notes00","r");
    if (fr==NULL)
    {
        printf("file not found");
    }
    else
    {
        while(1)
        {
            s[i]=fgetc(fr);
            if(s[i]==EOF)
            {
                break;
            }
            else
            {
                i++;
            }
        }
        for(i=i-1;i>=0;i--)
        {
            printf("%c",s[i]);
        }
        fclose(fr);
    }
}