// copy from one file to another file by converting small letters from small to capitals letters

#include<stdio.h>
int main()
{
    FILE *fr,*fc;
    char c;
    fr=fopen("notes00","r");
    fc=fopen("notes11","w");
    if(fr==NULL)
    {
        printf("File not found");
    }
    else
    {
        while (1)
        {
            c=fgetc(fr);
            if(c==EOF)
            {
                break;
            }
            else if(c>='a'&&c<='z')
            {
                fputc(c-32,fc);
            }
            else
            {
                fputc(c,fc);
            }
        }
        fclose(fr);
        fclose(fc);
    }
}