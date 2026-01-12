// Enter mobile number in string, if it is not 10 digits them throw error.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char mob[10];
    int i;
    cout<<"Enter mobile number:\n";
    cin>>mob;
    if(!(strlen(mob)==10))
    {
        throw mob;
    }
    else
    {
        cout<<"Valid number: "<<mob<<endl;
    }
    return 0;
}
