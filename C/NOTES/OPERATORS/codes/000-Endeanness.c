#include <stdio.h>

void main(void)
{
    int a = 0x10000000;
    unsigned char *buf = (unsigned char*)&a;

    printf("%x\n", buf[0]);
    printf("%x\n", buf[1]);
    printf("%x\n", buf[2]);
    printf("%x\n", buf[3]);

    if(buf[3] > 0x00)
    {
        printf("Little Endian System\n");
    }
}
