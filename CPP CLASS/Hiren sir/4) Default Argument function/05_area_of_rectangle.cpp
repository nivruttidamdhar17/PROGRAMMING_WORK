// pass default value 6.98 for b variable and find area of rectangle.
#include<iostream>
using namespace std;
class rectangle
{
    private:
    float l,b;
    public:
    void set(float p, float q=6.98)
    {
        l=p;
        b=q;
    }
    void area()
    {
        float a=l*b;
        cout<<"Area of rectangle"<<a<<endl;
    }
};
int main()
{
    rectangle x;
    x.set(14.22);
    x.area();
    rectangle y;
    y.set(3.21,4.23);
    y.area();
    return 0;
}