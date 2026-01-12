// dno dname specilization salary

#include<iostream>
using namespace std;
class doctor
{
    private:
    int dno;
    string dname;
    string specilization;
    float salary;
    public:
    doctor()
    {
        dno=0;
        dname="";
        specilization="";
        salary=0.0;
    }
    doctor(int a, string b, string c, float d)
    {
        dno=a;
        dname=b;
        specilization=c;
        salary=d;
    }
    void display()
    {
        cout<<dno<<" "<<dname<<" "<<specilization<<" "<<salary<<endl;
    }
    void displaybyno(int n)
    {
        if(n==dno)
        {
            display();
        }
    }
    void displaybyname(string s)
    {
        if(s==dname)
        {
            display();
        }
    }
};
int main()
{
    doctor x[100];
    int n,i,no;
    string r;
    int a; string b; string c; float d;
    cout<<"\nEnter n\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter doctor details\n";
        cin>>a>>b>>c>>d;
        x[i]=doctor(a,b,c,d);
    }
    cout<<"Display all doctors detail\n";
    for(i=0;i<n;i++)
    {
        x[i].display();
    }
    cout<<"Enter doctor number\n";
    cin>>no;
    for(i=0;i<n;i++)
    {
        x[i].displaybyno(no);
    }
    cout<<"Enter doctor name\n";
    cin>>r;
    for(i=0;i<n;i++)
    {
        x[i].displaybyname(r);
    }
    return 0;
}