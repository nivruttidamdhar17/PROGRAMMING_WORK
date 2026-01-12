// Calculate simple intrest calculation, assign 4.38 default value to rate of intrest.
 
#include<iostream>
using namespace std;
class simple_intrest
{
    private:
    float p,r;
    int d;  //days in int
    float n;
    public:
        void set(float a, int b, float c=4.38)
        {
            p=a;
            d=b;
            r=c;
        }
        void calculate_year()
        {
            n=(float)d/365.0;
        }
        void calculate()
        {
            float si=(p*n*r)/100;
            cout<<"Simple intres is= "<<si<<endl; 
        }
};
int main()
{
    simple_intrest x;
    x.set(45000,567);
    x.calculate_year();
    x.calculate();
    simple_intrest y;
    y.set(45000,567,8.99);
    y.calculate_year();
    y.calculate();
    return 0;
}

// simple intrest=p*n*r/100