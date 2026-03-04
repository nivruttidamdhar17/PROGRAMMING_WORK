
#include <stdio.h>

typedef unsigned long long u64;

struct A
{
    int a;
    char b;
    char d;
    float c;
};

int main()
{
    struct A insA;
    
    u64 offset_a, offset_b, offset_c, offset_d;
    
    /* offset = address of element - base address of structure*/
     offset_a = (u64)&insA.a - (u64)&insA;
     offset_b = (u64)&insA.b - (u64)&insA;
     offset_c = (u64)&insA.c - (u64)&insA;
     offset_d = (u64)&insA.d - (u64)&insA; 
     
     printf("base address of structure : %llu\n", (u64)&insA);
     printf("offset_a : %llu\noffset_b : %llu\noffset_c : %llu\noffset_d : %llu\n", offset_a, offset_b, offset_c, offset_d);

    // OFFSET_OF implementaiton without creating structure instance
    printf("\n\nOFFSET_OF without using instance of structure:\n");
    printf("offset_a : %llu\noffset_b : %llu\noffset_c : %llu\noffset_d : %llu\n", 
            
            (u64)(&((struct A*)0)->a),
            (u64)(&((struct A*)0)->b),
            (u64)(&((struct A*)0)->c),
            (u64)(&((struct A*)0)->d)
    );
}

