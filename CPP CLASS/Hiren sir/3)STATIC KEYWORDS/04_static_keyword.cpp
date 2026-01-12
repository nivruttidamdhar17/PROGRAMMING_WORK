// enter student details (roll no, name, course, count) and display students details and no of students.

#include<iostream>
using namespace std;
class student
{
    private:
        int rno;
        char sname[30];
        char course[30];
        static int count;
    public:
        void accept()
        {
            cout<<"Enter students details\n";
            cin>>rno>>sname>>course;
        }
        void display()
        {
            cout<<rno<<" "<<sname<<" "<<course<<" "<<endl;
        }
    static
        void countdisplay()
        {
            cout<<"Total student="<<count<<endl;
        }
};
int student::count=0;
int main()
{
    student x,y,z;
    x.accept();
    y.accept();
    student::countdisplay();
    z.accept();
    student::countdisplay();
    x.display();
    y.display();
    z.display();
    return 0;
}