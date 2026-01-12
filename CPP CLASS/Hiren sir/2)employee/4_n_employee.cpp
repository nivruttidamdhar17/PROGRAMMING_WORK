// Enter n employee details and display them, display only those employee whose salary greater than 7000.

#include<iostream>
using namespace std;
class Employee
{
    private:
    int eid;
    char ename[60];
    float salary;
    char designation;
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
    void displaysalarygt7000()
    {
        if(salary>7000)
        {
            display();
        }
    }
};
int main()
{
    Employee x[100];
    int n,i;
    cout<<"enter n\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        x[i].accept();
    }
    cout<<"Display all employee\n";
    for(i=0;i<n;i++)
    {
        x[i].display();
    }
    cout<<"Display employee details whose salary greater than 7000\n";
    for(i=0;i<n;i++)
    {
        x[i].displaysalarygt7000();
    }
}