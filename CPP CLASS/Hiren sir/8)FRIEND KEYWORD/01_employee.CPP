#include<iostream>
using namespace std;
class employee
{
    private:
    int eid;
    char ename[50];
    float salary;
    public:
    friend void accept(employee &p);
    friend void display(employee p);
};
void accept(employee &p)
{
    cout<<"Enter employee details\n";
    cin>>p.eid>>p.ename>>p.salary;
}
void display(employee p)
{
    cout<<p.eid<<" "<<p.ename<<" "<<p.salary<<endl;
}
int main()
{
    employee x;
    accept(x);
    display(x);
    return 0;
}