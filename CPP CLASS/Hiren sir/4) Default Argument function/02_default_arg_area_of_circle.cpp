// calculate area of circle pass default value 6.98 to radius.

#include<iostream>
#define pi 3.14
using namespace std;
class circle
{
    public:
    void area(float r=6.98)
    {
        float a=pi*r*r;
        cout<<"Area of circle="<<a<<endl;
    }
};
int main()
{
    float r;
    circle x;
    x.area();
    cout<<"Enter radius\n";
    cin>>r;
    x.area(r);
    return 0;
}




// #include<iostream>
// #define pi 3.14
// using namespace std;
// class circle
// {
//     private:
//     float r;
//     public:
//     void set(int p=6.98)
//     {
//         r=p;
//     }
//     void area()
//     {
//         float a=pi*r*r;
//         cout<<"Area of circle="<<a<<endl;
//     }
// };
// int main()
// {
    
//     circle x;
//     x.area();
//     x.set();
//     circle y;
//     y.set(2.88);
//     y.area();
//     return 0;
// }
