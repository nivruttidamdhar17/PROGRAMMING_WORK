// enter n employee details and display them. display only employee by employee number, display employee by employee name.
#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
    private:
        int eid;
        char ename[60];
        float salary;
        char designation[60];
    public:
        void accept()
        {
            cout<<"Enter employee details\n";
            cin>>eid>>ename>>salary>>designation;
        }
        void display()
        {
            cout<<eid<<" "<<ename<<" "<<salary<<" "<<designation<<endl;
        }
        void displaybyno(int no)
        {
            if(eid==no)
            {
                display();
            }
        }
        void displaybyname(char s[30])
        {
            if(strcmp(s,ename)==0)
            {
                display();
            }
        }
};
int main()
{
    Employee x[100];
    int n,i,no;
    char r[30];
    cout<<"Enter n\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        x[i].accept();
    }
    cout<<"Display employee details\n";
    for(i=0;i<n;i++)
    {
        x[i].display();
    }
    cout<<"Enter no\n";
    cin>>no;
    for(i=0;i<n;i++)
    {
        x[i].displaybyno(no);
    }
    cout<<"Enter employee name\n";
    cin>>r;
    for(i=0;i<n;i++)
    {
        x[i].displaybyname(r);
    }
}