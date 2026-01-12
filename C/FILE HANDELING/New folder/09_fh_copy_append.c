// copy and append file

#include<stdio.h>
int main()
{
    FILE *fr,*fa;
    char c;
    int i=0;
    fr=fopen("notes00","r");
    fa=fopen("append.txt","a");
    if (fr==NULL)
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
            else
            {
                fputc(c,fa);
            }
        }
        fclose(fr);
        fclose(fa);
    }
}