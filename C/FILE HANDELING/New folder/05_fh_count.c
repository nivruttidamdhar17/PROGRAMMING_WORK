#include<stdio.h>
int main()
{
    FILE *fr;
    char c;
    int cp=0,sm=0,dg=0,ot=0;
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
            if (c==EOF)
            {
                break;
            }
            else if(c>='A'&&c<='Z')
            {
                cp++;
            }
            else if(c>='a'&&c<='z')
            {
                sm++;
            }
            else if (c>='0'&&c<='9')
            {
                dg++;
            }
            
            else
            {
                ot++;
            }
        }
        fclose(fr);
        printf("capital=%d\n",cp);
        printf("small=%d\n",sm);
        printf("digits=%d\n",dg);
        printf("others=%d\n",ot);
    }
}