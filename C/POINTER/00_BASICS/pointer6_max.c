// ENTER NUMBERS AND PRINT MAXIMUM FROM THEM

#include<stdlib.h>
#include<stdio.h>
int main()
{
    int n,*a,i,max;
    printf("Enter n\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    max=*a;
    for(i=0;i<n;i++)
    {
        if(max<*(a+i))
        {
            max=*(a+i);
        }
    }
    printf("Maximum element from given elements=%d",max);
}