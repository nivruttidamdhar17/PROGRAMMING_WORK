// enter student details and display them

#include<iostream>
using namespace std;
class student
{
    private:
    int rno;
    char sname[50];
    float per;
    public:
    friend void accept(student &p);
    friend void display(student p);
};
void accept(student &p)
{
    cout<<"Enter student details\n";
    cin>>p.rno>>p.sname>>p.per;
}
void display(student p)
{
    cout<<p.rno<<" "<<p.sname<<" "<<p.per<<endl;
}
int main()
{
    student x;
    accept(x);
    display(x);
    return 0;
}

