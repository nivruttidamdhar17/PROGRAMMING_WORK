#include <stdio.h> 
#include <stdlib.h> 

char c = 'a'; 
short s = 0xa0b0; 
int n = 0xa0b0c0d0; 
long long m = 0xa0ffb0ffc0ff; 

struct Date{
    int day; 
    int month; 
    int year; 
}myDate = {1, 1, 1970}; 

void hexdump(void *p, size_t N, const char* msg); 

int main(void){
    hexdump(&c, sizeof(c), "hexdump(c):"); 
    hexdump(&s, sizeof(s), "hexdump(s):"); 
    hexdump(&n, sizeof(n), "hexdump(n):"); 
    hexdump(&m, sizeof(m), "hexdump(m)"); 
    hexdump(&myDate, sizeof(myDate), "hexdump(myDate):"); 
    return (EXIT_SUCCESS); 
}

void hexdump(void *p, size_t N, const char* msg){
    size_t i; 
    unsigned char uc; 

    if(msg)
        puts(msg); 
    for(i = 0; i < N; ++i){
        uc = *(unsigned char*)((unsigned char*)p + i);  
        printf("BYTE(%llu):%hhx\n", i, uc); 
    }
}

/* 
    return_type fun_name(T1, T2, ..., Tn); 

    void fun_name(T1, T2); 

    void* p; 
*/