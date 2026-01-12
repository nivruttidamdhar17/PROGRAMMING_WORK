// // Area of circle
// // (POS TYPE)


// #define pi 3.14
// #include<iostream>
// using namespace std;
// int main()
// {
//     float r,a;
//     cout<<"enter radius\n";
//     cin>>r;
//     a=pi*r*r;
//     cout<<"Area of circle="<<a<<endl;
// }


// Area of circle
// OOPS type
#define pi 3.14
#include<iostream>
using namespace std;
class circle
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
        float a=pi*r*r;
        cout<<"Area of circle="<<a<<endl;
    }
};
int main()
{
    circle x;
    x.accept();
    x.area();
}