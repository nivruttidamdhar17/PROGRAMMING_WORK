#include<iostream>
#define pi 3.14
using namespace std;
class cone
{
    private:
        float r,h,v;
    public:
        void accept()
        {
            cout<<"Enter r and h\n";
            cin>>r>>h;
        }
        void volume()
        {
            v=0.33*pi*r*r*h;
            cout<<"Volume of cone="<<v<<endl;
        }
};
int main()
{
    cone x;
    x.accept();
    x.accept();
}