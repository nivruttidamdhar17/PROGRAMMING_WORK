#include<stdio.h>

void main()
{
    char ch[50];
    printf("\nEnter address of the user: ");

    scanf("%s",&ch);

    printf("\nAddress of the user is : ");
    for(int i=0;i<sizeof(ch);i++)
    {

        if(ch[i]!=',')
        {
            printf("%c",ch[i]);
        }
        else if(ch[i]==',')
        {
            printf("\n");
        }

    }
}