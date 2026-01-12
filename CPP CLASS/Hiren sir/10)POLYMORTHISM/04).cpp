#include<iostream>
using namespace std;
class demo
{
    public:
    virtual void show()
    {
        cout<<"php\n";
    }
    void disp()
    {
        cout<<"vb\n";
    }
};
class test:public demo
{
    public:
    void show()
    {
        cout<<"cpp\n";
    }
    void view()
    {
        cout<<"java\n";
    }
};
int main()
{
    demo *x;
    demo y;
    test z;
    x=&y;
    x->show();
    x->disp();
    x=&z;
    x->show();
    x->disp();
    return 0;
}