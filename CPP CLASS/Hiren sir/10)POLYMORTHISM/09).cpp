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
        cout<<"Enter 2 numbers\n";
        cin>>a>>b;
    }
    void display()
    {
        cout<<a<<" "<<b<<endl;
    }
    arith add(arith p)
    {
        arith m;
        m.a=a+p.a;
        m.b=b+p.b;
        return m;
    }
    arith mul(arith r)
    {
        arith m;
        m.a=a*r.a;
        m.b=b*r.b;
        return m;
    }
    arith subtract(arith q)
    {
        arith m;
        m.a=a-q.a;
        m.b=b-q.b;
        return m;
    }
};
int main()
{
    arith x,y,z,w,t;
    x.accept();
    y.accept();

    z=x.add(y);
    z.display();

    w=z.mul(x);
    w.display();

    t=w.subtract(z);
    t.display();
    return 0;
}