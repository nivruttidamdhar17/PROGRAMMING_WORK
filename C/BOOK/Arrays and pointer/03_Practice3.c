#include<stdio.h>

void main()
{
    int count=0;
    printf("Enter string to check vowels: ");
    char ch[10];
    int arrSize=sizeof(ch);
    scanf("%s",&ch);
    for(int i=0;i<arrSize;i++)
    {
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
        {
            count++;
        }
    }

    printf("Number of vowels: %d",count);
}