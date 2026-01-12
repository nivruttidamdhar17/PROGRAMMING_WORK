#include<stdio.h>
int main()
{
    FILE *fr;
    char c;
    fr = fopen("notes00","r");
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
                printf("%c",c);
            }
        }
    }
    fclose(fr);
}