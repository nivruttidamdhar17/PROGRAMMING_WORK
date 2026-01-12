// #include<iostream>
// using namespace std;
// int main()
// {
//     float l,b,a;
//     cout<<"enter l and b\n";
//     cin>>l>>b;
//     a=0.5*l*b;
//     cout<<"Area of triangle="<<a<<endl;
// }



// area of triangle
#include<iostream>
using namespace std;
class triangle
{
    private:
    float l,b;
    public:
    void accept()
    {
        cout<<"Enter length\n";
        cin>>l;
        cout<<"Enter base\n";
        cin>>b;
    }
    void area()
    {
        float a=0.5*l*b;
        cout<<"Area of triangle="<<a<<endl;
    }
};
int main()
{
    triangle x;
    x.accept();
    x.area();
}