// enter 2 numbers and display max
// OOPS TYPE

#include<iostream>
using namespace std;
class maximum
{
    private:
    float a,b;
    public:
    void accept()
    {
        cout<<"Enter a and b\n";
        cin>>a>>b;
    }
    void max()
    {
        if (a>b)
        {
            cout<<a<<" is maximum"<<endl;
        }
        else
        {
            cout<<b<<" is maximum"<<endl;
        }
    }
};
int main()
{
    maximum x;
    x.accept();
    x.max();
}