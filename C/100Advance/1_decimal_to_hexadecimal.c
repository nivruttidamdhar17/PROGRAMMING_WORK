#include<stdio.h>
int main()
{
    int no,a[100],i=0;
    printf("Enter no\n");
    scanf("%d",&no);
    while(no!=0)
    {
        a[i]=no%16;
        no=no/16;
        i++;
    }
    for(i=i-1;i>=0;i--)
    {
        if(a[i]==10)
        {
            printf("A");
        }
        else if (a[i]==11)
        {
            printf("B");
        }
        else if(a[i]==12)
        {
            printf("C");
        }
        else if(a[i]==13)
        {
            printf("D");
        }
        else if(a[i]==14)
        {
            printf("E");
        }
        else if(a[i]==15)
        {
            printf("F");
        }
        else
        {
            printf("%d",a[i]);
        }
    }
}
/*
 #include<stdio.h>
 int main()
 {
     int no,a[100],i;
     printf("Enter no\n");
     scanf("%d",&no);
     while(no!=0)
     {
         a[i]=no%16;
         no=no/16;
         i++;
     }
     for(i=i-1;i>=0;i--)
     {
         switch(a[i])
         {
             case 10:
             {
                 printf("A");
                 break;
             }
             case 11:
             {
                 printf("B");
                 break;
             }
             case 12:
             {
                 printf("C");
                 break;
             }
             case 13:
             {
                 printf("D");
                 break;
             }
             case 14:
             {
                 printf("E");
                 break;
             }
             case 15:
             {
                 printf("F");
                 break;
             }
             default:
             {
                 printf("%d",a[i]);
                 break;
             }
         }
     }
 }*/
