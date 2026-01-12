#include <stdio.h>

void main()
{
    int x = 10;
    int y = x++ + ++x;
    printf("%d", y);
}
