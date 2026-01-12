#include<stdio.h>
int main()
{
    FILE *fr,*fc,*fs,*fd,*fo;
    char c;
    fr=fopen("notes00","r");
    fc=fopen("cap.txt","c");
    fs=fopen("small.txt","s");
    fd=fopen("digit.txt","d");
    fo=fopen("other.txt","o");
    if(fr==NULL)
    {
        printf("file not found");
    }
    else
    {
        while(1)
        {
            c=fgetc(fr);
            if (c==EOF)
            {
                break;
            }
            else if(c>='A'&&c<='Z')
            {
                fputc(c,fc);
            }
            else if(c>='a'&&c<='z')
            {
                fputc(c,fd);
            }
            else
            {
                fputc(c,fo);
            }
        }
        fclose(fr);
        fclose(fc);
        fclose(fs);
        fclose(fd);
        fclose(fo);
    }
}