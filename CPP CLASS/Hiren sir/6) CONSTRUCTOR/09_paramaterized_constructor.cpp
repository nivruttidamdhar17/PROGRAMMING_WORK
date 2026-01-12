//Enter n product details and display them. display product details by p numbers, display product details by pname, display only those products where total price greater than 750 (use paramaterized constructor)

#include<iostream>
#include<string.h>
using namespace std;
class product
{
    private:
    int pno;
    string pname;
    int qty;
    float price,total;
    public:
    product()
    {
        pno=0;
        pname="";
        qty=0;
        price=0.0;
        total=0.0;
    }
    product(int a,string b, int c, float d)
    {
        pno=a;
        pname=b;
        qty=c;
        price=d;
    }
    void calculate()
    {
        total=qty*price;
    }
    void display()
    {
        cout<<pno<<" "<<pname<<" "<<qty<<" "<<price<<" "<<total<<endl;
    }
    void displaybyno(int n)
    {
        if(n==pno)
        {
            display();
        }
    }
    void displaybyname(string s)
    {
        if(s==pname)
        {
            display();
        }
    }
    void displaybyprice()
    {
        if(total>750)
        {
            display();
        }
    }
};
int main()
{
    product x[100];
    int n,i,no;
    string r;
    int a; string b; int c; float d;
    cout<<"\nEnter n\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter product details\n";
        cin>>a>>b>>c>>d;
        x[i]=product(a,b,c,d);
        x[i].calculate();
    }
    cout<<"Display all product details\n";
    for(i=0;i<n;i++)
    {
        x[i].display();
    }
    cout<<"Ener product no\n";
    cin>>no;
    for(i=0;i<n;i++)
    {
        x[i].displaybyno(no);
    }
    cout<<"Enter product name\n";
    cin>>r;
    for(i=0;i<n;i++)
    {
        x[i].displaybyname(r);
    }
    cout<<"Display product details with price greater than 750\n";
    for(i=0;i<n;i++)
    {
        x[i].displaybyprice();
    }
    return 0;
}