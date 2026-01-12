#include <stdio.h> 
#include <stdlib.h> 
#include <assert.h> 

int main(void){
    int* p = NULL; 
    int N = 5; 
    int i; 

    p = (int*)malloc(N * sizeof(int)); 
    assert(p); 

    for(i = 0; i < 5; ++i)
        p[i] = (i + 1) * 10; 

    free(p); 
    p = NULL; 

    return (0); 
}