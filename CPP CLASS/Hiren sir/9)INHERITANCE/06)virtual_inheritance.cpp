/* create a based class student(rno, name, course) create a two derived class internal marks(i1,i2,i3) and external 
class(e1,e2,e3) from student class create another derived class result (m1,m2,m3) total and percetange*/

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
class imarks:public virtual student
{
    protected:
        int i1,i2,i3;
    public:
        void accept()
        {
            student::accept();
            cout<<"entre internal marks from 30\n";
            cin>>i1>>i2>>i3; 
        }
        void display()
        {
            student::display();
            cout<<i1<<" "<<i2<<" "<<i3<<" ";
        }
};
class emarks:public virtual student
{
    protected:
        int e1,e2,e3;
    public:
        void accept()
        {
            cout<<"Enter external marks from 70\n";
            cin>>e1>>e2>>e3;
        }
        void display()
        {
            cout<<"e1"<<" "<<e2<<" "<<e3<<" ";
        }
};
class result:public imarks, public emarks
{
    private:
        int m1,m2,m3,total;
        float per;
    public:
        void accept()
        {
            imarks::accept();
            emarks::accept();
        }
        void calculate()
        {
            m1=i1+e1;
            m2=i2+e2;
            m3=i3+e3;
            total=m1+m2+m3;
            per= (float)total/3.0;
        }
        void display()
        {
            imarks::display();
            emarks::display();
            cout<<m1<<" "<<m2<<" "<<m3<<" "<<total<<" "<<per<<" "<<endl;
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