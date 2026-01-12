// calculate area of triangle.

#include<iostream>
using namespace std;
inline float area(float l, float b)
        {
            return 0.5*l*b;
        }
        int main()
        {
            float l,b,a;
            cout<<"Enter l and b\n";
            cin>>l>>b;
            a=area(l,b);
            cout<<"Area of triangle="<<a<<endl;
            return 0;
        }