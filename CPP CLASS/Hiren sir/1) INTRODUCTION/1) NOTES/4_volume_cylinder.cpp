// // volume of cylinder
// // (POS TYPE)
// #define pi 3.14
// #include<iostream>
// using namespace std;
// int main()
// {
//     float r,h,v;
//     cout<<"enter r and h\n";
//     cin>>r>>h;
//     v=pi*r*r*h;
//     cout<<"volume of cylinder="<<v<<endl;
// }


// volume of cylinder
// OOPS type
#define pi 3.14
#include<iostream>
using namespace std;
class cylinder
{
    private:
    float r,h;
    public:
    void accept()
    {
        cout<<"Enter radius\n";
        cin>>r;
        cout<<"Enter height(h)\n";
        cin>>h;
    }
    void volume()
    {
        float v=pi*r*r*h;
        cout<<"Volume of cylinder="<<v<<endl;
    }
};
int main()
{
    cylinder x;
    x.accept();
    x.volume();
}




// homework
//  volume of sphere=4/3*pi*r*r*r;