#include<iostream>
using namespace std;
class Emp
{
    private:
        int eid;
        string ename;
        float salary;
    public:
        Emp()
        {
            eid=0;
            ename="";
            salary=0.0;
        }
        Emp(int a,string b,float c)
        {
            eid=a;
            ename=b;
            salary=c;
        }
        void set(int a, string b, float c)
        {
            eid=a;
            ename=b;
            salary=c;
        }
        void show()
        {
            cout<<eid<<" "<<ename<<" "<<salary<<" "<<endl;
        }
};
int main()
{
    Emp x;
    x.set(101,"jatin",9000);
    x.show();
    Emp y=Emp(102,"Hitesh",4000);
    y.show();
}