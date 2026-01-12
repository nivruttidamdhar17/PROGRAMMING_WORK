#include<iostream>
using namespace std;
class arith
{
    private:
    int a;
    float b;
    public:
    void accept()
    {
        cout<<"Enter no\n";
        cin>>a>>b;
    }
    void display()
    {
        cout<<a<<" "<<b<<endl;
    }
    friend arith operator +(arith p, arith q);
    friend arith operator -(arith p, arith q);
};
arith operator +(arith p, arith q)
{
    arith m;
    m.a=p.a+q.a;
    m.b=p.b+q.b;
    return m;
}
arith operator -(arith p, arith q)
{
    arith t;
    t.a=p.a-q.a;
    t.b=p.b-q.b;
    return t;
}
int main()
{
    arith x,y,z,w,s;
    x.accept();
    y.accept();
    z=x+y;
    z.display();
    w=y-x;
    w.display();
    return 0;
}