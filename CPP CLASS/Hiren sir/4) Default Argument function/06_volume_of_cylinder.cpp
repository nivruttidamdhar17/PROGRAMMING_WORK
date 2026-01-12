// pass default value 7.44 to h variable and find volume of cylinder.
#include<iostream>
#define pi 3.14
using namespace std;
class cylinder
{
    private:
        float r,h;
    public:
        void set(float p, float q=7.44)
        {
            r=p;
            h=q;
        }
        void area()
        {
            float a=pi*r*r*h;
            cout<<"volume of cylinder"<<a<<endl;
        }
};
int main()
{
    cylinder x;
    x.set(4.23);
    x.area();
    cylinder y;
    y.set(11.3, 6.7);
    y.area();
    return 0;
}