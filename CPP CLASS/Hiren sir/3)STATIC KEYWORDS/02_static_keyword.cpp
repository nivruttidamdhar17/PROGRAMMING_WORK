#include<iostream>
using namespace std;
class demo
{
    public:
    int a;
    static int b;
};
int demo::b=0;
int main()
{
    demo x,y,z;
    x.a=11;
    x.b=21;
    y.a=18;
    y.b=64;
    z.a=17;
    z.b=38;
    cout<<x.a<<" "<<x.b<<" "<<y.a<<" "<<y.b<<" "<<z.a<<" "<<z.b<<" "<<demo::b<<endl;
}