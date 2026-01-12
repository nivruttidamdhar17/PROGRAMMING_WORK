#include <stdio.h> 
#include <stdlib.h> 

int** get_arr_of_ptrs_1(int*); 
void get_arr_of_ptrs_2(int***, int*); 

int main(void){
    int** arr1 = NULL; 
    int N1; 
    int i; 

    arr1 = get_arr_of_ptrs_1(&N1);
    // use arr1  
    for(i = 0; i < 5; ++i)
        free(arr1[i]); 
    free(arr1); 
    arr1 = NULL; 

    int** arr2 = NULL; 
    int N2 = 0; 

    get_arr_of_ptrs_2(&arr2, &N2); 
    // usr arr2 
    for(i = 0; i < N2; ++i)
        free(arr2[i]); 
    free(arr2); 
    arr2 = NULL; 

    /* 
        type(N2) -> int 
        type(&N2) -> int* 

        type(arr2) -> int** -> declared 
        type(&arr2) -> int***
    */

}

int** get_arr_of_ptrs_1(int* pN){
    int N; 
    int i; 
    int** pp_arr; 

    printf("Enter N:"); 
    scanf("%d", &N);

    pp_arr = (int**)malloc(N * sizeof(int*)); 
    assert(pp_arr); 

    for(i = 0; i < N; ++i)
        pp_arr[i] = (int*)malloc(sizeof(int)); 

    *pN = N; 
    return (pp_arr); 
}

void get_arr_of_ptrs_2(int*** ppp_arr, int* pN){
    int N; 
    int i; 
    int** pp_arr; 

    printf("Enter N:"); 
    scanf("%d", &N);

    pp_arr = (int**)malloc(N * sizeof(int*)); 
    assert(pp_arr); 

    for(i = 0; i < N; ++i)
        pp_arr[i] = (int*)malloc(sizeof(int)); 

    *ppp_arr = pp_arr; 
    *pN = N; 
}