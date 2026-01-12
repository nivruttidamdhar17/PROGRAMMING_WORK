/* 
short n :  0xa0b0
short   :  1010000010110000

    x   x+1
    b0  a0 

    x   x+1
    a0  b0 

unsigned int n; 
    0xa0 b0 c0 d0 
    10100000 10110000 11000000 11010000

    x   x+1  x+2    x+3
    d0  c0   b0     a0 

    a0  b0   c0     d0

    int n; 
    &n; 
*/

int main(void){
    unsigned int n = 0xa0b0c0d0; 
    if(*(unsigned char*)&n == 0xd0)
        puts("This machine is a little endian machine"); 
    else if(*(unsigned char*)&n == 0xa0)
        puts("This machine is a big endian machine"); 
    else 
        puts("Something went wrong!"); 
    return (0); 
}


