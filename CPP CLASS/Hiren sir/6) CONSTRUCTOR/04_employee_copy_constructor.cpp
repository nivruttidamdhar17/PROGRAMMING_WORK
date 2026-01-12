#include<iostream>
using namespace std;
class emp
{
    private:
    int eid;
    string ename;
    float salary;
    public:
    emp()   //default function
    {
        eid=0;
        ename="";
        salary=0.0;
    }
    emp(int a, string b, float c)   //paramaterized
    {
        eid=a;
        ename=b;
        salary=c;
    }
    emp(emp &p)   //copy function
    {
        eid=p.eid;
        ename=p.ename;
        salary=p.salary;
    }
    void show() //member function
    {
        cout<<eid<<" "<<ename<<" "<<salary<<endl;
    }
};
int main()
{
    emp x(104,"jatin",50000);
    x.show();
    emp y(x);
    y.show();
    return 0;
}