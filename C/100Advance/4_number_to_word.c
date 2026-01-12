// #include<stdio.h>
// int main()
// {
//     int no;
//     printf("Enter no\n");
//     scanf("%d",&no);
    
//         word(no);
// }

#include<stdio.h>
void words(int no)
{
    int n[4]={10000000,100000,1000,100};
    char r[20][30]={"","one ","two ","three ","four ","five ","six ","seven ","eight ","nine ","ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","nineteen "};
    char d[10][30]={"","twenty ","thirty ","fourty ","fifty ","sixty ","seventy ","eithty ","ninty "};
    char m[4][30]={"corer ","lacks ","thousand ","hundred "};
    int i=0,a,b,p;
    char s[500]="";
    while (no!=0)
    {
        if(no<100)
        {
            if(no<20)
            {
                strcat(s,r[no]);
            }
            else{
                a=no/10;
                b=no%10;
                strcat(s,d[a]);
                strcat(s,r[b]);
            }
            no=0;
        }
        else
        {
            p=no/n[i];
            no=no%n[i];
            if(p!=0)
            {
                
            }
        }
    }
}