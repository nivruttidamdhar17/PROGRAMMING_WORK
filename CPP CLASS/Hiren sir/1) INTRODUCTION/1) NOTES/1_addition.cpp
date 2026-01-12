// enter two numbers and add them

#include<iostream>
using namespace std;

class addition
{
    private:
    int a,b;
    public:
    void accept()
    {
        cout<<"enter two numbers\n";
        cin>>a>>b;
    }
    void add()
    {
        int c=a+b;
        cout<<"addition ="<<c<<endl;
    }
};
int main()
{
    addition x;
    x.accept();
    x.add();
    return 0;
}