#include<iostream>
#define pi 3.14
using namespace std;
inline float area(float r)
        {
            return pi*r*r;
        }
        int main()
        {
            float r,a;
            cout<<"Enter radius\n";
            cin>>r;
            a=area(r);
            cout<<"area of circle="<<a<<endl;
            return 0;
        }