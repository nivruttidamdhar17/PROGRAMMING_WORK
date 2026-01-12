#include <stdio.h> 
#include <stdlib.h> 
#include <assert.h> 

int main(void){
    int** pp = NULL; 
    int i; 
    int N = 5; 

    pp = (int**)malloc(N * sizeof(int*)); 
    assert(pp); 

    for(i = 0; i < 5; ++i){
        pp[i] = (int*)malloc(sizeof(int)); 
        assert(pp[i]); 
    }

    for(i = 0; i < 5; ++i)
        pp[i] = (i+1) * 10; 

    for(i = 0; i < 5; ++i)
        printf("pp[%d]:%d\n", i, pp[i]); 

    for(i = 0; i < 5; ++i)
        free(pp[i]); 

    free(pp); 
    pp = NULL; 

    return (0); 
}

/* 
    int arr[5]; 

    int* p = arr;
    int* p = malloc(5 * sizeof(int)); 

    int* arr[5]; 

    int** pp = arr; 
    for(i = 0; i < 5; ++i)
        arr[i] -> int* 

    int* pp = malloc(5 * sizeof(int*)) 

*/