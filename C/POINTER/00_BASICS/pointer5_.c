//int[5]; 
//int *a;
//a=(int*)malloc(5*sizeof(int));


// 1) &a[i]=a+i
// 2) a[i]=*(a+i)

//Q.Enter n numbers only even elements
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*a,i;
    printf("Enter n\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    printf("Display even numbers\n");
    for(i=0;i<n;i++)
    {
        if(*(a+i)%2==0)
        {
            printf("%d ",*(a+i));
        }
    }
}