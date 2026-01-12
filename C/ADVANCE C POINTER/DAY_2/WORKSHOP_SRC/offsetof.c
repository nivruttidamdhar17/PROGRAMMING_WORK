#include <stdio.h> 
#include <stdlib.h> 

struct A{
    int a;      // 0 
    char b;     // 4 
    float c;    // 8  
}; 

void technique_1(void); 
void technique_2(void); 
void technique_3(void); 
void technique_4(void);     /* NINJA */

int main(void){
    technique_1(); 
    technique_2(); 
    technique_3(); 
    technique_4(); 
    return (0); 
}

void technique_1(void){
    unsigned long long offset_a, offset_b, offset_c; 
    struct A inA; 
    puts("Technique 1:"); 
    offset_a = (unsigned long long)&inA.a - (unsigned long long)&inA;
    offset_b = (unsigned long long)&inA.b - (unsigned long long)&inA;
    offset_c = (unsigned long long)&inA.c - (unsigned long long)&inA;
    printf("offset_a=%llu, offset_b=%llu, offset_c=%llu\n", 
            offset_a, offset_b, offset_c); 
}

void technique_2(void){
    struct A* pA = NULL; 
    unsigned long long offset_a, offset_b, offset_c; 
    puts("Technique 2:"); 
    offset_a = (unsigned long long)(&pA->a);  
    offset_b = (unsigned long long)(&pA->b); 
    offset_c = (unsigned long long)(&pA->c);

    printf("offset_a = %llu, offset_b = %llu, offset_c = %llu\n", 
            offset_a, offset_b, offset_c); 
}

void technique_3(void){
    unsigned long long int offset_a, offset_b, offset_c; 
    puts("Technique 3:"); 
    offset_a = (unsigned long long int)(&((struct A*)0)->a); 
    offset_b = (unsigned long long int)(&((struct A*)0)->b); 
    offset_c = (unsigned long long int)(&((struct A*)0)->c); 
    printf("offset_a = %llu, offset_b = %llu, offset_c = %llu\n", 
            offset_a, offset_b, offset_c); 
}

void technique_4(void){
#define OFFSET_OF(type, mem)   ((unsigned long long int)(&((type*)0)->mem))
    unsigned long long int offset_a, offset_b, offset_c; 
    puts("Technique 4:"); 
    offset_a = OFFSET_OF(struct A, a); 
    offset_b = OFFSET_OF(struct A, b); 
    offset_c = OFFSET_OF(struct A, c); 
    printf("offset_a = %llu, offset_b = %llu, offset_c = %llu\n", 
            offset_a, offset_b, offset_c); 
}

/* 
    type(inA) == struct A
    type(inA.a) == int 
    type(&inA.a) == int* 
    type(&inA) == struct A*
*/

/* 
#define     NULL    ((void*)0)
*/

/*
&pA->c 

address in pA == 1000 
+ 
offset of (c in struct A) == 8 

1000 + 8 

1008 

address in pA + offset of c in struct A == 1008 
*/

