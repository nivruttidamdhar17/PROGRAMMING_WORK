#include<iostream>
#define pi 3.14
using namespace std;
class cylinder
{
    private:
    float r,h;
    public:
    void accept()
    {
        cout<<"Enter r and h\n";
        cin>>r>>h;
    }
    inline float volume()
    {
        return pi*r*r*h;
    }
};
int main()
{
    float v;
    cylinder x;
    x.accept();
    v=x.volume();
    cout<<"Volume of cylinder="<<v<<endl;
    return 0;
}