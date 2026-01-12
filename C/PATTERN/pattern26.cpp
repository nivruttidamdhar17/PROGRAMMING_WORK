/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int n= 5;
    // char ch = 'A';
    for(int i=0; i<n; i++)
    {
        for(int j=0; j < (n-i-1); j++)
        {
            cout << " ";
        }
        
        for(int k = 1; k<=i+1; k++)
        {
            cout<< k;
        }
        
        for(int l = i; l >0; l--)
        {
            cout << l;
        }
        
        cout << endl;
    }

    return 0;
}