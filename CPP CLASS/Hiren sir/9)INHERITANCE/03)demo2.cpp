// create a class student (rno, sname, course, m1, m2, m3, total, per) enter n student details and display them.

#include<iostream>
using namespace std;
class student
{
    private:
    int rno;
    string sname, course;
    int m1, m2, m3, total;
    float per;
    public:
    void accept()
    {
        cout<<"Enter students details\n";
        cin>>rno>>sname>>course>>m1>>m2>>m3;

    }
    void calculate()
    {
        total=m1+m2+m3;
        per=(float)total/3.0;
    }
    void display()
    {
        cout<<rno<<" "<<sname<<" "<<course<<" "<<m1<<" "<<m2<<" "<<m3<<" "<<total<<" "<<per<<endl;
    }
};
int main()
{
    student x[100];
    int n,i;
    cout<<"Enter n\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        x[i].accept();
        x[i].calculate();
    }
    cout<<"Display all students details\n";
    for(i=0;i<n;i++)
    {
        x[i].display();
    }
    return 0;
}
