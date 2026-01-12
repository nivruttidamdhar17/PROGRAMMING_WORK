// copy vowel letters to vowel.txt and consonant to consonant.txt.

#include<stdio.h>
int main()
{
    FILE *fv,*fc,*fr;
    char c;
    fr=fopen("notes00","r");
    fr=fopen("consonent.txt","w");
    fr=fopen("vowel.txt","w");
    if(fr==NULL)
    {
        printf("file not found");
    }
    else
    {
        while(1)
        {
            c=fgetc(fr);
            if(c==EOF)
            {
                break;
            }
            else if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
            {
                if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
                {
                    fputc(c,fr);
                }
                else
                {
                    fputc(c,fc);
                }
            }
        }
        fclose(fr);
        fclose(fc);
        fclose(fv);
    }
}