// copy from two files and display in one file.

#include<stdio.h>
int main()
{
    FILE *f1,*f2,*f3;
    char c;
    f1=fopen("notes00","r");
    f2=fopen("two.txt","r");
    f3=fopen("three.txt","w");
    if(f1==NULL||f2==NULL)
    {
        printf("file not found");
    }
    else
    {
        while(1)
        {
            c=fgetc(f1);
            if(c==EOF)
            {
                break;
            }
            else
            {
                fputc(c,f3);
            }
        }
        while(1)
        {
            c=fgetc(f2);
            if(c==EOF)
            {
                break;
            }
            else
            {
                fputc(c,f2);
            }
        }
        fclose(f1);
        fclose(f2);
        fclose(f3);
        f3=fopen("three.txt","r");
        while(1)
        {
            c=fgetc(f3);
            if(c==EOF)
            {
                break;
            }
            else if(c>='A'&&c<='Z')
            {
                printf("%c",c+32);
            }
            else if(c>='a'&&c<='z')
            {
                printf("%c",c-32);
            }
            else
            {
                printf("%c",c);
            }
        }
        fclose(f3);
    }
}