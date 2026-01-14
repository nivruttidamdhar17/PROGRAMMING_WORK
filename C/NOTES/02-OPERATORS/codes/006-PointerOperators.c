#include <stdio.h>

void main()
{
    int val = 50;
    int *ptr = &val;  // ptr holds the address of val
    int x = *ptr;     // x gets the value 50

    printf("%d", x);
}