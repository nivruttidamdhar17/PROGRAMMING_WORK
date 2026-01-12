#include<iostream>
using namespace std;
class student
{
    private:
    int rno;
    string sname;
    string course;
    float per;
    public:
    student()
    {
        rno=0;
        sname="";
        course="";
        per=0.0;
    }
    student(int p, string q, string r, float s)
    {
        rno=p;
        sname=q;
        course=r;
        per=s;
    }
    student(student &p)
    {
        rno=p.rno;
        sname=p.sname;
        course=p.course;
        per=p.per;
    }
    void show()
    {
        cout<<rno<<" "<<sname<<" "<<course<<" "<<per<<endl;
    }
};
int main()
{
    student x(101,"jatin","mca",65.43);
    x.show();
    student y(x);  //copy all member by copy constructor
    y.show();
    student z;   //without calling copy constructor it copy
    z=x;
    z.show();
    return 0;
}