// create and abstra class shape have a pure virtyal area create a two derived class circle and triangle from shape class find area of them.
#define pi 3.14
#include<iostream>
using namespace std;
class shape
{
    private:
    virtual void area()=0;
};
class circle:public shape
{
    private:
    float r;
    public:
    void accept()
    {
        cout<<"Enter radius\n";
        cin>>r;
    }
    void area()
    {
        float a;
        a=pi*r*r;
        cout<<"area of circle="<<a<<endl;
    }
};
class triangle:public shape
{
    private:
    float l,b;
    public:
    void accept()
    {
        cout<<"Enter l and b\n";
        cin>>l>>b;
    }
    void area()
    {
        float a=0.5*l*b;
        cout<<"Area of triangle="<<a<<endl;
    }
};
int main()
{
    circle y;
    y.accept();
    y.area();\
    triangle z;
    z.accept();
    z.area();
    return 0;
}