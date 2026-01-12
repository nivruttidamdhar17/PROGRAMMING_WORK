#include <stdio.h> 

void* cpa_test_function(
                    unsigned long long*, 
                    int*, 
                    int*(*)(int*), 
                    int*
                ); 

int* my_func(int* p){
    static int N = 0; 
    N = *p * *p; 
    return &N; 
}

int main(void){
    unsigned long long L = 1234567890; 
    int N = 500; 
    int data = 8; 
    int* ret_ptr; 
    ret_ptr = cpa_test_function(&L, &N, my_func, &data); 
    printf("*ret_ptr = %d\n", *ret_ptr); 
    return (0); 
}

void* cpa_test_function(
    unsigned long long* pLN, 
    int* pN, 
    int*(*pfn)(int*), 
    int* data
){
    void* ret_val; 
    printf("first formal param:*pLN = %llu\n", *pLN); 
    printf("second formal param:*pN = %d\n", *pN); 
    ret_val = pfn(data); 
    return (ret_val); 
}