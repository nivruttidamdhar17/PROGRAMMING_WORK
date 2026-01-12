/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void decimalToBinary(int num)
{
    int reminder = 0;
    int power = 1;
    int answer = 0;
    while(num > 0)
    {
        reminder = num % 2;
        num = num / 2;
        
        answer = answer+ (reminder * power);
        power = power * 10;
    }
    printf("%d", answer);
}

int main()
{
    int num = 6;
    decimalToBinary(num);
    
    return 0;
}