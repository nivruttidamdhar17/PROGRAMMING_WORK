#include <stdio.h> 
#include <stdlib.h> 

int* get_array_1(int* pN); 
void get_array_2(int** pp_arr, int* pN); 

int main(void){
    int* arr1 = NULL; 
    int N1 = 0; 

    arr1 = get_array_1(&N1); 
    // use arr1 
    free(arr1); 
    arr1 = NULL; 

    int* arr2 = NULL; 
    int N2 = 0; 

    get_array_2(&arr2, &N2); 
    // use arr2 
    free(arr2); 
    arr2 = NULL; 

    /* 
        type(arr2) -> int*  --> declared 
        type(&arr2) -> int** -> inferred 
        type(N2) -> int 
        type(&N2) -> int* 
    */
   return (0); 
}

int* get_array_1(int* pN){
    int N; 
    int* p = NULL; 

    printf("Enter size of array:"); 
    scanf("%d", &N); 

    p = (int*)malloc(N * sizeof(int)); 
    assert(p); 
    *pN = N;
    return (p); 
}

void get_array_2(int** pp_arr, int* pN){
    int N; 
    int* p = NULL; 

    printf("Enter size of array:"); 
    scanf("%d", &N); 

    p = (int*)malloc(N * sizeof(int)); 
    assert(p); 

    *pp_arr = p; 
    *pN = N; 
}