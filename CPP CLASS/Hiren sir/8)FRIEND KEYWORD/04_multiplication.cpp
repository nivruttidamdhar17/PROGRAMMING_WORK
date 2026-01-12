#include<iostream>
using namespace std;
class two;
class one
{
    private:
    int a;
    public:
    void accept()
    {
        cout<<"Enter a\n";
        cin>>a;
    }
    void display()
    {
        cout<<"a="<<a<<endl;
    }
    friend void mul(one p, two q);
};
class two
{
    private:
    int b;
    public:
    void accept()
    {
        cout<<"Enter b\n";
        cin>>b;
    }
    void display()
    {
        cout<<"b="<<b<<endl;
    }
    friend void mul(one p, two q);
};
void mul(one p, two q)
{
    int c;
    c=p.a*q.b;
    cout<<"multiplication="<<c<<endl;
}
int main()
{
    one x;
    two y;
    x.accept();
    y.accept();
    x.display();
    y.display();
    mul(x,y);
    return 0;
}
