// create a abstract class shape have a pure virtual function volume create a two derived class cylinder and sphre(cylinder pi*r*r*h, sphere =4/3*pi*r*r*r) from a shape class find the volume of them

#define pi 3.14
#include<iostream>
using namespace std;
class shape
{
    private:
    virtual void volume()=0;
};
class cylinder:public shape
{
    private:
    float r,h;
    public:
    void accept()
    {
        cout<<"Enter radius and height\n";
        cin>>r>>h;
    }
    void volume()
    {
        float v;
        v=pi*r*r*h;
        cout<<"volume of cylinder="<<v<<endl;
    }
};
class sphere:public shape
{
    private:
    float r;
    public:
    void accept()
    {
        cout<<"Enter r\n";
        cin>>r;
    }
    void volume()
    {
        float v=1.3*pi*r*r*r;
        cout<<"Volume of sphere="<<v<<endl;
    }
};
int main()
{
    shape *x;
    cylinder y(7.29,8.43);
    x=&y;
    x->volume();
    sphere z(6.98);
    x=&z;
    x->volume();
    return 0;
}