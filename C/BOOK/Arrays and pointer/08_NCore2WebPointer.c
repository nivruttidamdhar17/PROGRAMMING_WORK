#include<stdio.h>

void main()
{
    /*
    int num1=10;
    char ch1='A';

    int *ptr1=&num1;
    char *ptr2=&ch1;

    printf("without giving address");
    printf("\n%p",ptr1);
    printf("\n%p",ptr2);

    printf("\nWith address");
    printf("\n%p",&ptr1);
    printf("\n%p",&ptr2);


    printf("\n%d",ptr1);
    printf("\n%c",ptr2);

    // this will print actual values of num1 and num2
    printf("\n%d",*ptr1);
    printf("\n%c",*ptr2);

    */




   /*
    int num1=10;
    int num2=20;

    int *ptr1=&num1;
    int *ptr2=&num2;

    printf("Addition of both values is : %d\n",(*ptr1+*ptr2));

    //printf("Addition of both integers is : %d\n", (ptr1+ptr2));  // Error: invalid operands to binary + (have 'int *' and 'int 


    printf("%p\n",&ptr1);
    printf("%p\n",&ptr2);

    */



    /*
    char x='A';
    char y='B';

    char *cptr1=&x;
    char *cptr2=&y;

    printf("%d\n", *cptr1+*cptr2);  // it will print ascii value
    printf("%c\n", *cptr1+*cptr2);   // it wil print element whose ascii value is equal to addition of above two 
    
    //printf("%p\n",ptr1+ptr2);
    */



    /*
    char ch=121;

    printf("%c\n",ch);
    printf("%c\n",ch+1);
    
    printf("%d\n",ch);
    printf("%d\n",ch+1);
    */



    /*
    int x=10;
    int *ptr = &x;

    printf("%d\n",*ptr);
    printf("%d\n",ptr);
    printf("%d\n",*(ptr+1+1));
    */



    /*
    char ch1 = 'x';
	char ch2 = 'y';
	char ch3 = 'z';

    char *ptr=&ch1;

    printf("%p\n",ptr);    // it will give address in form of hexadecimal
    printf("%c\n",*ptr);    // it will give value

    printf("%p\n",ptr+1);    //  ptr + 1 * sizeof(DTP))  it will give address in form of hexadecimal
    printf("%c\n",*ptr+1);   //  it will add 1 to ascii value and print it in the form of character
    
    printf("%p\n", ptr+2);     //  ptr + 2 * sizeof(DTP))   it will give address in form of hexadecimal
    printf("%c\n",*ptr+2);   //  it will add 2 to ascii value and print it in the form of character
    */



    
    /*
    char ch1='x';

    char *ptr=&ch1;

    printf("%p\n",ptr);   // address in the form of hexadecimal
    printf("%c\n",*ptr);   // value at given pointer

    //printf("%p\n", (ptr+1.5));
    //printf("%c\n", *(ptr+1.5));

    printf("%p\n",(ptr+'A'));    // Hexadecimal address
    printf("%c\n",*(ptr+'A'));   //garbage value or non printable character
    */




    /*
    // Array pointer
    int arr[5]={10,20,30,40,50};

    //int *ptr=&arr;   //warning: initialization of 'int *' from incompatible point
    int *ptr=&arr[0];

    int *ptr2=&arr[3];
    printf("%d\n",*ptr);
    printf("%d\n", *(ptr+1));


    printf("%d\n",*ptr2);
    printf("%d\n", *(ptr2+1));
    */  



   // August 3 done



    int x = 10;

	printf("%d\n",x);          //10
	printf("%p\n",&x);         //0000084649ffa0c


	int *ptr = &x;
	printf("%p\n",ptr);        //0000084649ffa0c
	printf("%p\n",&ptr);   	   //00000084649ffa00  //it is address of pointer variable i.e. of ptr

    


}