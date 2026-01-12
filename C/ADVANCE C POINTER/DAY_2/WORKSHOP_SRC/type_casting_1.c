#include <stdio.h> 

/* 
    addr(n): 0xd 0xc 0xb 0xa 
    &n == x 

    x    x+1   x+2    x+3 
    0x0d 0x0c  0x0b   0x0a
*/

int main(void){
    int n = 0x0a0b0c0d; 
    short s; 

    printf("Before:sizeof(n):%zu\n", sizeof(n)); 
    s = *(short*)(&n); 
    printf("s = %hx\n", s); 
    printf("After:sizeof(n):%zu", sizeof(n)); 

    return (0); 
}

/* 
    type(n)     ==  int     .. declared 
    type(&n)    ==  int*    .. inferred 
    eval(&n)    ==  x 

    int m; 

    m = *(&n); 

    (short*)&n; 

    *(short*)&n; 

    expr -> Ti  OPERATOR(Ti)
*/