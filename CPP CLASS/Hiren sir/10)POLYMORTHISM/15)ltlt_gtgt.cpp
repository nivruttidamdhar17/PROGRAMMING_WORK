#include<iostream>
using namespace std;
class emp
{
    private:
    int eid;
    string ename;
    float salary;
    public:
    friend istream & operator>>(istream & in,emp & p);
    friend ostream & operator <<(ostream & out,emp p);
};
istream & operator >>(istream & in, emp &p)
{
    cout<<"Enter emp details\n";
    in>>p.eid>>p.ename>>p.salary;
    return in;
}
ostream & operator <<(ostream & out,emp p)
{
    out<<p.eid<<" "<<p.ename<<" "<<p.salary<<endl;
    return out;
}
int main()
{
    emp x;
    cin>>x;
    cout<<x;
    return 0;
    
}