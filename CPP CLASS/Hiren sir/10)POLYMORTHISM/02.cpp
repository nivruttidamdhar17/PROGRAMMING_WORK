// create a class employee (eno,ename,salary) enter 'n' employee details and display them. display employee details by employee number(eno) and employee name(ename).

#include<iostream>
using namespace std;
class employee
{
    private:
    int eno;
    char ename[60];
    float salary;
    public:
    void accept()
    {
        cout<<"Enter employee details:\n";
        cin>>eno>>ename>>salary;
    }
    void display()
    {
        cout<<eno<<" "<<ename<<" "<<salary<<" ";
    }
    void display(int no)
    {
        if(no==eno)
        {
            display();
        }
    }
    void display(string s)
    {

    }

};
int main()
{
    employee x[100];
    int n,i,no;
    string r;
    cout<<"Enter n\n";
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
    cout<<"Enter employee no\n";
    cin>>no;
    for(i=0;i<n;i++)
    {
        x[i].display(no);
    }
    cout<<"Enter employee name\n";
    cin>>r;
    for(i=0;i<n;i++)
    {
        x[i].display(r);
    }
    return 0;
}