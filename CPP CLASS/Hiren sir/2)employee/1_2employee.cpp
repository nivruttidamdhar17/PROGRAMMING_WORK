#include<iostream>
using namespace std;
class Employee
{
    private:
        int eid;
        char ename[30];
        float salary;
        char designation[60];
    public:
        void accept()
        {
            cout<<"Enter Employee details\n";
            cin>>eid>>ename>>salary>>designation;
        }
        void display()
        {
            cout<<eid<<" "<<ename<<" "<<salary<<" "<<designation<<endl;
        }
};
int main()
{
    Employee x,y;
    x.accept();
    y.accept();
    x.display();
    y.display();
}
