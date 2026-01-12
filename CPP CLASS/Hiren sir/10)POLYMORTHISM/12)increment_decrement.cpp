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
    void operator ++()
    {
        ++a;
    }
    void operator --()
    {
        --a;
    }
};
int main()
{
    Number x;
    x.accept();
    x.display();
    ++x;
    x.display();
    --x;
    x.display();
    return 0;
}