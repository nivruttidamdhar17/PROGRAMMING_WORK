#include<iostream>
#define pi 3.14
using namespace std;
class circle
{
    private:
    float r;
    public:
    circle(float p=7.99)
    {
        r=p;
    }
    void area()
    {
        float a=pi*r*r;
        cout<<"Area of circle="<<a<<endl;
    }
};
int main()
{
    circle x;
    x.area();
    circle y(6.88);
    y.area();
}