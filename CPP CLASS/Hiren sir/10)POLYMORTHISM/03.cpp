// create a class product (pno,pname,company,price) enter n product details and diplay them, display prouct detail by pno and display product detail by company name.

#include<iostream>
using namespace std;
class product
{
    private:
    int pno;
    string pname,company;
    float price;
    public:
    void accept()
    {
        cin>>pno>>pname>>company>>price;
    }
    void display()
    {
        cout<<pno<<" "<<pname<<" "<<company<<" "<<price<<endl;
    }
    void display(int no)
    {
        if(no==pno)
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
    cout<<"Enter value of 'n':";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter product details:\n";
        x[i].accept();
    }
    cout <<"Display product details:\n";
    for(i=0;i<n;i++)
    {
        x[i].display();
    }
    cout<<"Enter product number:";
    cin>>no;
    for(i=0;i<n;i++)
    {
        x[i].display(no);
    }
    cout<<"Enter product name:";
    cin>>r;
    for(i=0;i<n;i++)
    {
        x[i].display(r);
    }
    return 0;
}