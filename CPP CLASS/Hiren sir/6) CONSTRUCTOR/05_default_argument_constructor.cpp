// calculate volume of cylinder (pi*r*r*h) pass default value 2.98 to h variable

#include<iostream>
#define pi 3.14
using namespace std;
class cylinder
{
    private:
    float r,h;
    public:
    cylinder(float p, float q=2.98)
    {
        r=p;
        h=q;
    }
    void volume()
    {
        float v=pi*r*r*h;
        cout<<"Volume of cylinder="<<v<<endl;
    }
};
int main()
{
    cylinder x(5.98);
    x.volume();
    cylinder y(5.4,7.99);
    y.volume();
    return 0;
}




