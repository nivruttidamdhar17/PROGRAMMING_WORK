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
        cout<<"Enter numbers\n";
        cin>>a>>b;
    }
    void display()
    {
        cout<<a<<" "<<b<<endl;
    }
    arith operator +(arith p)
    {
        arith m;
        m.a=a+p.a;
        m.b=b+p.b;
        return m;
    }
    arith operator *(arith p)
    {
        arith m;
        m.a=a*p.a;
        m.a=b*p.b;
        return m;
    }
    arith operator -(arith p)
    {
        arith m;
        m.a=a-p.a;
        m.b=a-p.b;
        return m;
    }

};
int main()
{
    arith x,y,z,w,r;
    x.accept();
    y.accept();

    z=x+y;
    z.display();

    w=z*x;
    w.display();

    r=w-z;
    z.display();

    return 0;
}
