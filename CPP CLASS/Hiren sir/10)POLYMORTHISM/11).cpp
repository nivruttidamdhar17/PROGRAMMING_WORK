#include<iostream>
using namespace std;
class Arithmetic_assignment
{
    private:
    int a;
    float b;
    public:
    void accept()
    {
        cout<<"Enter nos\n";
        cin>>a>>b;
    }
    void display()
    {
        cout<<a<<" "<<b<<endl;
    }
    void operator +=(Arithmetic_assignment p)
    {
        a+=p.a;
        b+=p.b;
    }
    void operator -=(Arithmetic_assignment p)
    {
        a-=p.a;
        b-=p.b;
    }
    void operator *=(Arithmetic_assignment m)
    {
        a*=m.a;
        b*=m.b;
    }
    void operator /=(Arithmetic_assignment m)
    {
        a/=m.a;
        b/=m.b;
    }
};
int main()
{
    Arithmetic_assignment x,y,z,w,r;
    x.accept();
    y.accept();
    x.accept();
    w.accept();
    r.accept();

    x += y;
    x.display();
    
    z -= x;
    z.display();

    w *= y;
    w.display();

    r /= z;
    r.display();
    
    return 0;
}