#include<stdio.h>
#include<string.h>

void main()
{
    // char str[]={'H','E','L','L','O'};
    // puts(str);



    // char str[20];
    // printf("Enter string : ");
    // scanf("%s",str);
    // puts(str);

    // Output: Enter string : Hello worls
    //         Hello




    // char str[20];
    // printf("Enter string : ");
    // gets(str);
    // printf("Output : %s",str);
    // puts(str);

    //Output : Enter string : Hello World!
    //         Output : Hello World!
    //         Hello World!





    // char str[30];
    // int i=0;
    // printf("Enter string : ");
    // int ch = getchar();
    // while( ch != '*')
    // {
    //     str[i] =ch;
    //     i++;
    //     ch = getchar();
    // }
    // str[i]='\0';
    // puts(str);
    // printf("Output string is : %s",str);

    //Enter string : Hello world*
    //               Hello world
    //               Output string is : Hello world





    // // Operations on the string : Find the length of the string
    // int length=0;
    // char str[100];
    // printf("Enter the string : ");
    // gets(str);
    // int i=0;
    // while(str[i] != '\0')
    // {
    //     i++;
    // }
    // length = i;
    // printf("Length of the string is : %d",length);

    //Output : Enter the string : Hello my name is Nivrutti Damdhar
    //         Length of the string is : 33



    /*
    // Converting string in upper case 
    char str[100];
    printf("Enter string : ");
    gets(str);
    int i=0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i]=str[i]-32;
        }
        i++;
    }
    puts(str);

    //Output: Enter string : Hello Nivrutti Radhesham Damdhar
    //              HELLO NIVRUTTI RADHESHAM DAMDHAR 
    */







    /*
    // Program to convert upper case string to lower case
    char str[100];
    printf("Enter string : ");
    gets(str);
    int i=0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i]=str[i]+32;
        }
        i++;
    }
    printf("Output : %s",str);

    //Enter string : HELLo nIVRUTTI DAmDHAR
    //Output : hello nivrutti damdhar
    */





    /*
    //Program to append string 
    char str1[50];
    char str2[50];

    printf("Enter string 1 : ");
    gets(str1);
    printf("Enter string 2 : ");
    gets(str2);
    int i=0;
    int length1=0;
    int j=0;
    while(str1[i] != '\0')
    {
        length1++;
        i++;
    }

    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        j++;
        i++;
    }
    puts(str1);

    //Output: Enter string 1 : Hello Nivrutti
    //        Enter string 2 :  Damdhar
    //        Hello Nivrutti Damdhar
    */





     /*
    // Write a program to compare string
    char str1[50];
    char str2[50];

    printf("Enter string 1 : ");
    gets(str1);
    printf("Enter string 2 : ");
    gets(str2);
    int i=0;
    int j=0;
    int length1=0;
    int length2=0;

    length1=strlen(str1);
    length2=strlen(str2);

    if(length1 != length2)
    {
        printf("Strings are not same");
    }
    else
    {
        while(i < length1)
        {
            if(str1[i] == str2[i])
            {
                i++;
            }
            else
            {
                break;
            }
        }
        if(i == length1 && i == length2)
        {
            printf("Strings are equal");
        }
        if(i != length1 && i != length2)
        {
            printf("Strings are not equal");
        }
    }
    
    //Enter string 1 : Hello   
    //Enter string 2 : elleho
    //Strings are not same
    */




   /*
    // Program to reverse a string
    char str1[50];
    char str2[50];
    printf("Enter string 1 : ");
    gets(str1);

    int length = strlen(str1);

    int j=0;
    for(int i=length-1;i>=0;i--)
    {
        str2[j]=str1[i];
        j++;
    }
    printf("Reversed string is : %s",str2);

    //Enter string 1 : Nivrutti
    //Reversed string is : itturviN
    */





    /*
    // Program to extract any substring from the string
    char str1[50];
    printf("Enter string 1 : ");
    gets(str1);
    int subStr_index;
    int len_Substr;
    printf("Enter index for extracting string : ");
    scanf("%d",&subStr_index);
    printf("Enter length of substring : ");
    scanf("%d",&len_Substr);

    char str2[len_Substr];
    int i=0;
    int j=0;
    while(str1[i] != '\0' && len_Substr > 0)
    {
        if(i >= subStr_index)
        {
            str2[j]=str1[i];
            j++;
        }
        i++;
        if(j >= len_Substr)
        {
            break;
        }
    }
    printf("Substring of given string is : %s",str2);
    */


    /*
    for(int i=subStr_index;i<=subStr_index+len_Substr;i++)
    {
        str2[j]=str1[i];
        j++;
    }
    printf("Substring of given string is : %s",str2);
    */
    






    /*
    // Program to insert new string at given index in main string
    char str1[50];
    printf("Enter main string : ");
    gets(str1);
    char str2[50];
    printf("Enter substring to insert : ");
    gets(str2);
    int index;
    printf("Enter index to insert string : ");
    scanf("%d",&index);
    
    char ins_string[100];

    int i=0;
    int j=0;
    int k=0;

    while(str1[i] != '\0')
    {
        if(i == index)
        {
            while(str2[k] != '\0')
            {
                ins_string[j]=str2[k];
                j++;
                k++;
            }
        }
        else{
            ins_string[j]=str1[i];
            j++;
        }
        i++;
    }
    ins_string[j]='\0';
    printf("New string is : %s",ins_string);

    // Enter main string : Nivrutti  Damdhar
    // Enter substring to insert : Radhesham
    // Enter index to insert string : 9
    // New string is : Nivrutti RadheshamDamdhar
    */




    
    /*
    //Pattern Matching
    printf("Enter main string: ");
    char str1[100];
    gets(str1);
    printf("Enter string to search in main string : ");
    char str2[90];
    gets(str2);

    int i=0;
    int k=0;
    int j=0;
    int max=strlen(str1)-strlen(str2)+1;
    int index = -1;

    if(strlen(str1) < strlen(str2))
    {
        printf("Given string is invalid ");
    }

    for(i=0;i<max;i++)
    {
        for(j=0;j<strlen(str2); j++)
        {
            if(str1[i+j] != str2[j])
            {
                break;
            }
        }
        if(j == strlen(str2))
        {
            printf("pattern matched at index : %d",i);
        }
    }
    */
    
    






    /*
    // Program to delete substring from main string
    char str1[50];
    printf("Enter main string : ");
    gets(str1);
    char str2[50];
    printf("Enter substring to be delete : ");
    gets(str2);

    int i=0;
    int j=0;
    int lastIndex;

    for(i=0;i<strlen(str1);i++)
    {
        for(j=0;j<strlen(str2);j++)
        {
            lastIndex=0;
            if(str1[i+j] != str2[j])
            {
                break;
            }
           lastIndex = i+j; 
        }
        if(j == strlen(str2))
        {
            for(int k=0;k<strlen(str1);k++)
            {
                str1[i-1] = str1[lastIndex+1];
                i++;
                lastIndex++;
            }
        }
    }
    printf("\nFinal string is : %s",str1);
    */
    



   /*
    char text[100];
    printf("Enter main string : ");
    gets(text);
    char str1[50];
    printf("Enter substring to be replaced : ");
    gets(str1);
    char str2[50];
    printf("Enter replacing string : ");
    gets(str2);
    char newstr[100];

    int txtlen = strlen(text);
    int str1len = strlen(str1);
    int str2len = strlen(str2);

    int i=0;
    int j=0;
    int k=0;
    int x=0;
    int index =0;
    int lastindex;
    for(i=0;i<txtlen+(str2len-str1len)+1;i++)
    {
        for(j=0;j<str1len;j++)
        {
            if(text[i+j] != str1[j])
            {
                break;
            }
            lastindex=i+j;
        }
        if(j == str1len)
        {
            for(int k=0;k<str2len;k++)
            {
                newstr[x] = str2[k];
                i++;
                x++;
                index++;
            }
        }
        if(index == str2len)
        {
            newstr[x] = text[lastindex+1];
            lastindex++;
            x++;
        }
        else
        {
            newstr[x]=text[x];
            x++;
        }
    }
    printf("\nNew String is : %s",newstr);
    */



   
    /*
    char ch =40;
    int x=40;
    int y=20;
    int add;
    add=x+y;
    printf("\nAddition : %d",add);
    printf("\nAddition : %c",add);
    printf("\nNumber is : %d",ch);
    printf("\nNumber is : %c",ch);
    printf("%d%c",add);
    */


    // char c = '0';
    // printf("%d %o %x\n", c, c, c);

    // int a = 10, b = 20;
    // int *p = &a;
    // printf("%p %p\n", p, &b);

    // unsigned char c = 0b10101101;
    // printf("%c \n%d \n%o \n%x\n", c, c, c, c);





    

    
}
