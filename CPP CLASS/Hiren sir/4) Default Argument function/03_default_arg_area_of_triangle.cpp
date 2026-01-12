// Calculate area of triangle assign default value 7.14 to arguement b. using object oriented.

#include <iostream>
#define pi 3.14
using namespace std;
class triangle
{
private:
    float l, b;
public:
    void area(float l, float b = 7.14)
    {
        float a = 0.5 * l * b;
        cout << "Area of triangle=" << a << endl;
    }
};
int main()
{
    float l,b;
    triangle x;
    cout<<"Enter l\n"<<endl;
    cin>>l;
    x.area(l);
    cout<<"Enter l and b\n";
    cin>>l>>b;
    return 0;
}