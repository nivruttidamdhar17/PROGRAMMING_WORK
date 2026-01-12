// create a based class student(rno, name and course), create a derived class marks(m1,m2,m3) from student class, create another derived class result(total, per) from marks class.

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
        cout<<"Enter students details\n";
        cin>>rno>>sname>>course;
    }
    void display()
    {
        cout<<rno<<" "<<sname<<" "<<course<<" ";
    }
};
class marks:public student
{
    protected:
    int m1,m2,m3;
    public:
    void accept()
    {
        student::accept();
        cout<<"Enter marks details\n";
        cin>>m1>>m2>>m3;
    }
    void display()
    {
        student::display();
        cout<<m1<<" "<<m2<<" "<<m3<<" ";
    }
};
class result:public marks
{
    private:
    int total;
    float per;
    public:
    void accept()
    {
        marks::accept();
    }
    void calculate()
    {
        total=m1+m2+m3;
        per=(float) total/3.0;
    }
    void display()
    {
        marks::display();
        cout<<total<<" "<<per<<endl;
    }
};
int main()
{
    result x[100];
    int n,i;
    cout<<"Enter n\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        x[i].accept();
        x[i].calculate();
    }
    cout<<"Display all student details\n";
    for(i=0;i<n;i++)
    {
        x[i].display();
    }
    return 0;
}
