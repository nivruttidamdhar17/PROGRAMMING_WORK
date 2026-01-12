#include <stdio.h>
#include <stdint.h>

// Print binary representation of an int
void print_binary(int num)
{
    unsigned int mask = 1u << (sizeof(int) * 8 -1);
    for(int i=0; i < (sizeof(int) * 8); i++)
    {
        printf("%c", (num & mask) ? '1' : '0');
        mask >>= 1;
    }
    printf("\n");
}

int main() {
    int pos = 20;   // positive
    int neg = -20;  // negative

    printf("pos = %d\n", pos);
    print_binary(pos);

    printf("pos >> 1 = %d\n", pos >> 1);
    print_binary(pos >> 1);

    printf("neg = %d\n", neg);
    print_binary(neg);

    printf("neg >> 1 = %d\n", neg >> 1);
    print_binary(neg >> 1);

    return 0;
}
