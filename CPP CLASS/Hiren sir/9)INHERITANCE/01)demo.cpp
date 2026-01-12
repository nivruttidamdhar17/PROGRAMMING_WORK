#include<iostream>
using namespace std;
class demo
{
    public:
    int a;
    float b;
    void one()
    {
        cout<<"cpp\n";
    }
};
class test:public demo
{
    public:
    float c;
    void two()
    {
        cout<<"php\n";
    }
};
int main()
{
    test x;
    x.c=3.5;
    x.two();
    x.a=19;
    x.b=4.6;
    x.one();
    demo y;
    y.a=16;
    y.b=2.5;
    y.one();
}