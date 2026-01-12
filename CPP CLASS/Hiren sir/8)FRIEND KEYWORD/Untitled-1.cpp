#include<iostream>
using namespace std;
class demo
{
    private:
    int num;
    public:
    void set(num=10)
    {
        cin>>num;
    }
    void calculate()
    {
        num++;
        cout<<"value of num:"<<num<<endl;
    }
};
int main()
{
    demo x,y,z;
    x.calculate();
    y.calculate();
    z.calculate();
    return 0;
}