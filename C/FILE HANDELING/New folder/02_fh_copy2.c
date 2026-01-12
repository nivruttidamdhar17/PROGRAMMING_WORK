// copy from one file to another file

#include<stdio.h>

int main()
{
    FILE *fr,*fw;
    char s[100],c;
    fr=fopen("notes00","r");
    fw=fopen("notes11","w");
    if(fr==NULL)
    {
        printf("File not found\n");
    }
    else
    {
        while(1)
        {
            c=fgetc(fr);
            if(c==EOF)     // full form EOF of End of File.
            {
                break;
            }
            else{
                fputc(c,fw);
            }
        }
    }
    fclose(fr);
    fclose(fw);
}