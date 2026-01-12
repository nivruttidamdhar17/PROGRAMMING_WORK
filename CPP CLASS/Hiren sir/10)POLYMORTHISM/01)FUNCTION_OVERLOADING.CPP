#include<iostream>
using namespace std;
class addition
{
    public:
    void add(int a, int b)
    {
        int c=a+b;
        cout<<"Addition= "<<c<<endl;
    }
    void add(int a, int b, int c)
    {
        int d=a+b+c;
        cout<<"Addition ="<<d<<endl;
    }
    void add(float a, float b, float c, float d)
    {
        float e=a+b+c+d;
        cout<<"Addition="<<e<<endl;
    }
};
int main()
{
    addition x;
    x.add(7,8,9);
    x.add(6.2,4.9,7.8,7.1);
    x.add(6.2);
}