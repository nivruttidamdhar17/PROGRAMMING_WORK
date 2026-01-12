// Enter 10 product details and display them.

#include<iostream>
using namespace std;
class product
{
    private:
    int pno;
    char pname[60];
    int qty;
    float price,total;
    public:
    void accept()
    {
        cout<<"Enter product details\n";
        cin>>pno>>pname>>qty>>price;
    }
    void calculate()
    {
        total=qty*price;
    }
    void display()
    {
        cout<<pno<<" "<<pname<<" "<<qty<<" "<<price<<" "<<total<<endl;
    }
};
int main()
{
    product x[10];
    int i;
    for(i=0;i<10;i++)
    {
        x[i].accept();
        x[i].calculate();
    }
    for(i=0;i<10;i++)
    {
        x[i].display();
    }
    return 0;
}