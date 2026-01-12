#include <stdio.h> 
#include <stdlib.h> 

/* 
    int* p; 
    type(p) == pointer to int 
    type(*p) == int 
    
    int a[5]; 

    type(a) = array 5 of integer 
    type(a[0]) == int 

    int* a[5] 

    type(a) == a is array 5 of pointer to int 
    type(a[i]) == pointer to int    (where 0 <= i < 5)
    type(*a[i]) == int              (where 0 <= i < 5)

*/

int main(void)
{
    int* a[5] = {0, 0, 0, 0, 0}; 
    int i; 
     
    for(i = 0; i < 5; ++i)
    {
        a[i] = (int*)malloc(sizeof(int)); 
        if(a[i] == 0)
        {
            puts("malloc():error in allocating memory"); 
            exit(-1); 
        }
    }

    /* 
    1000        1008        1016        1024        1032

        2500        2744        3482        15632       8882
    */

   
    for(i = 0; i < 5; ++i)
    {
        *a[i] = (i+1) * 100; 
    }

    for(i = 0; i < 5; ++i)
    {
        printf("*a[%d]=%d\n", i, *a[i]); 
    }

    for(i = 0; i < 5; ++i)
    {
        free(a[i]); 
        a[i] = 0; 
    }
    
    return (0); 
}

