/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void binaryToDecimal(int num)
{
    int power = 1;
    unsigned int reminder;
    int answer = 0;
    while(num > 0)
    {
        reminder = num % 10;
        num = num / 10;
                
        answer = answer + (power * reminder);
        power = power*2;
    }
    cout << answer;
}

int main()
{
    unsigned int num = 11111110;
    binaryToDecimal(num);
    
    return 0;
}