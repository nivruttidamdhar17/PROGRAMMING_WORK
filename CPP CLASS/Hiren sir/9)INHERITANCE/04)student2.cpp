// create a based class student (rno, sname, course) create a derived class marks(m1,m2,m3,total,per) from student class. enter n student detials and display them.

#include<iostream>
using namespace std;
class student
{
    protected:
    int rno;
    string sname,course;
    public:
    void accept()
    {
        cout<<"Enter student details\n";
        cin>>rno>>sname>>course;
    }
    void display()
    {
        cout<<rno<<" "<<sname<<" "<<course<<" ";
    }
};
class marks: public student
{
    private:
    int m1, m2, m3, total;
    float per;
    public:
    void accept()
    {
        student::accept();
        cout<<"Enter marks details\n";
        cin>>m1>>m2>>m3;
    }
    void calculate()
    {
        total=m1+m2+m3;
        per=(float)total/3.0;
    }
    void display()
    {
        student::display();
        cout<<m1<<" "<<m2<<" "<<m3<<" "<<total<<" "<<per<<endl;
    }
};
int main()
{
    marks x[100];
    int n,i;
    cout<<"Enter n\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        x[i].accept();
        x[i].calculate();
    }
    cout<<"Display all marks details\n";
    for(i=0;i<n;i++)
    {
        x[i].display();
    }
    return 0;
}
