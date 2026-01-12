// floar number system

#include<stdio.h>
#include<math.h>
int main()
{
    int n,s;
    printf("Enter n\n");
    scanf("%d",&n);
    s=step_move(n);
    printf("Total move=%d",s);
    return 0;
}
int step_move(int n)
{
    int c=0;
    int i=8;
    while(n!=0)
    {
        if(n>=pow(2,i))
        {
            c++;
            n=n-pow(2,i);
        }
        i--;
    }
    return c;
}