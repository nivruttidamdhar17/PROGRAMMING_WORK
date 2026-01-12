#include<iostream>
using namespace std;
void show(int a, float b=7.89, int c=56)
{
    cout<<a<<" "<<b<<" "<<c<<endl;
}
int main()
{
    show(9);
    show(4,23.34);
    show(2,5.6,11);
    return 0;
}
