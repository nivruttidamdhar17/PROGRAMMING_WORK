//swap of a two number of two different class using friend function.

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
    friend void swap(one &p, two &q);
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
    friend void swap(one &p, two &q);
};
void swap(one &p, two &q)
{
    int r;
    r=p.a;
    p.a=q.b;
    q.b=r;
}
int main()
{
    one x;
    two y;
    x.accept();
    y.accept();
    x.display();
    y.display();
    cout<<"Display before swap\n";
    x.display();
    y.display();
    swap(x,y);
    cout<<"Display after swap\n";
    x.display();
    y.display();
    return 0;
}