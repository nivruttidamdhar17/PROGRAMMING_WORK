// Relational operator

#include<iostream>
using namespace std;
class Number
{
    private:
    int a;
    public:
    void accept()
    {
        cout<<"Enter no\n";
        cin>>a;
    }
    void display()
    {
        cout<<"a="<<a<<endl;
    }
    int operator >(Number p)
    {
        if(a>p.a)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    int operator == (Number p)
    {
        if(a==p.a)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    Number x,y;
    x.accept();
    y.accept();
    cout<<"max=";
    if(x>y)
    {
        x.display();
    }
    else
    {
        y.display();
    }
    if(y==x)
    {
        cout<<"both are equal\n";
    }
    else
    {
        cout<<"both are not equal\n";
    }
    return 0;
}