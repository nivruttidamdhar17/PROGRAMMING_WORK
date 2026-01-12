#include<iostream>
using namespace std;
class demo
{
    public:
    void one()
    {
        cout<<"php\n";
    }
    virtual void two()
    {
        cout<<"vb\n";
    }
    virtual void three()=0;
    virtual void four()=0;
};
class test:public demo
{
    public:
    void three()
    {
        cout<<"ds\n";
    }
    void four()
    {
        cout<<"java";
    }
};
int main()
{
    demo *x;
    test y;
    x=&y;
    x->show();
    
}