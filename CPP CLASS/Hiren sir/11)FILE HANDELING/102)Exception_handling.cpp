// Enter number if number is positive then print even odd and negative them throw error.

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    if(a>=0)
    {
        if(a%2==0)
        {
            cout<<"Number is even.";
        }
        else{
            cout<<"Number is odd.";
        }
    }
    else
    {
        throw a;
    }
    return 0;
}