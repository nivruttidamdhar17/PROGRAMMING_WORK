/* 
    Declare a pointer to function accepting two integers and returns 
	a pointer to array 5 of int 
*/

#include <stdio.h> 
#include <stdlib.h> 

int (*cpa_func(int, int))[5]; 

int main(void){
    int a = 15, b = 4; 
    int (*(*pfn)(int, int))[5]; 
    int (*ret_ptr)[5]; 
    int i; 

    pfn = cpa_func; 
    ret_ptr = pfn(a, b); 
    for(i = 0; i < 5; ++i){
        printf("(*ret_ptr)[%d]:%d\n", i, (*ret_ptr)[i]); 
    }

    return (0); 
}

int (*cpa_func(int num1, int num2))[5]{
    static int A[5];

    A[0] = num1 + num2; 
    A[1] = num1 - num2; 
    A[2] = num1 * num2; 
    A[3] = num1 / num2; 
    A[4] = num1 % num2; 

    return (&A); 
}

 /* 
    if num1 == 15 and num2 == 4
    A[0] -> 19, A[1] -> 11, A[2] -> 60, 
       A[3] -> 3, A[4] -> 3 
*/
