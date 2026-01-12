#include <stdio.h> 
#include <stdlib.h> 

#define OFFSET_OF(type, mem)    ((unsigned long long)(&((type*)0)->mem))
#define CONTAINER_OF(addr, type, mem)  ((type*)((unsigned long long)addr - OFFSET_OF(type, mem)))

struct A{
    int a; 
    char b; 
    float c; 
}; 

void func(float* pf); 
void func2(float* pf); 

int main(void){
    struct A inA1 = {10, 'a', 3.14f}; 
    struct A inA2 = {20, 'b', 6.28f}; 
    struct A inA3 = {30, 'c', 9.23f}; 
    
    func(&inA1.c); 
    func(&inA2.c); 
    func(&inA3.c); 

    func2(&inA1.c); 
    func2(&inA2.c); 
    func2(&inA3.c); 

    return (0); 
}

void func(float* pf){
    /* 
        PRECONDITION:pf contains address of member 'c' of some instance of struct A. 
        POSTCONDITION: print all members of such instance of struct A. 
    */
   puts("In func():"); 
   struct A* pA = (struct A*)(  
                                (unsigned long long)pf 
                                - (unsigned long long int)(&((struct A*)0)->c)
                            ); 
    printf("pA->a:%d, pA->b:%c, pA->c:%.3f\n", pA->a, pA->b, pA->c); 
}

void func2(float* pf){
    puts("in func2():");
    struct A* pA = CONTAINER_OF(pf, struct A, c); 
    printf("pA->a:%d, pA->b:%c, pA->c:%.3f\n", pA->a, pA->b, pA->c); 
}