#include <stdio.h> 
#include <stdlib.h> 

/* 
    x       +1      +2      +3      +4      +5      +6      +7

    0x0     0x0     0x0     0x0     0x0     0x0     0x0     0x0

                            <statement> 
 
    0xff    0x0     0x0     0x0     0x0     0x0     0x0     0x0

                            <statement> 

    0xff    0xff    0xff     0x0     0x0     0x0     0x0    0x0

                            <statement> 

    0xff    0xff    0xff     0xff    0xff    0xff    0xff    0x0

                            <statement> 

    0xff    0xff    0xff     0xff    0xff    0xff    0xff    0xff
*/

unsigned long long int n = 0; 

int main(void){
    printf("1:n = %llx\n", n); 
    *(unsigned char*)&n = 0xff; 
    printf("2:n = %llx\n", n); 
    *(unsigned short*)((unsigned char*)&n + 1) = 0xffff; 
    printf("3:n = %llx\n", n); 
    *(unsigned int*)((unsigned char*)&n + 3) = 0xffffffff; 
    printf("4:n = %llx\n", n); 
    *(unsigned char*)((unsigned char*)&n + 7) = 0xff; 
    printf("5:n = %llx\n", n); 
    return (0); 
}

/* 
    &n      == x 
    &n + 1  == x + 8 
*/