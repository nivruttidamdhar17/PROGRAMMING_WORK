// max from two different numbers of two different class using friend function.

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
    friend int max(one p, two q);
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
    friend int max(one p, two q);
};
int max(one p, two q)
{
    if(p.a>q.b)
    {
        return p.a;
    }
    else{
        return q.b;
    }
}
int main()
{
    int m;
    one x;
    two y;
    x.accept();
    y.accept();
    x.display();
    m=max()

}