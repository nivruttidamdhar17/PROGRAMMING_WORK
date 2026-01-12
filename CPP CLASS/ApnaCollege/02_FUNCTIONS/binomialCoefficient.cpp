// Code for Binomial coefficient (nCr)
#include <iostream>
using namespace std;

int factorial(int num)
{
    int factorial = 1;
    for(int i = num; i>0; i--)
    {
        factorial = factorial * i;
    }
    return factorial;
}
int main()
{
    int n = 6;
    int r = 3;
    
    int binomialCoefficient = factorial(n)/ (factorial(r)*factorial(n-r));
    
    printf("Binomial Coefficient = %d\n", binomialCoefficient);
    return 0;
}
