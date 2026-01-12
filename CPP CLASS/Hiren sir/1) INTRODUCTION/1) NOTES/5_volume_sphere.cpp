// // volume of sphere
// // pos type

// #define pi 3.14
// #include<iostream>
// using namespace std;
// int main()
// {
//     float v,r;
//     cout<<"Enter radius r\n";
//     cin>>r;
//     v=1.3*pi*r*r*r;
//     cout<<"Volume of sphere="<<v<<endl;
// }



// Volume of sphere
// OOPS TYPE

#define pi 3.14
#include<iostream>
using namespace std;
class sphere
{
    private:
    float r,v;
    public:
    void accept()
    {
        cout<<"Enter r\n";
        cin>>r;
    }
    void volume()
    {
        float v=1.3*pi*r*r*r;
        cout<<"Volume of sphere="<<v<<endl;
    }
};
int main()
{
    sphere x;
    x.accept();
    x.volume();
}