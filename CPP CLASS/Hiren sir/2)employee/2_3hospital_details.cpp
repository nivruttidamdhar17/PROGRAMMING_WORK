// enter 3 hospital detail and display them
// hno,hname,hcity,hod;

#include<iostream>
using namespace std;
class Hospital
{
    private:
    int hno;
    char hname[30];
    char hcity[30];
    int nod;
    public:
    void accept()
    {
        cout<<"Enter Hospital details\n";
        cin>>hno>>hname>>hcity>>nod;
    }
    void display()
    {
        cout<<hno<<" "<<hname<<" "<<hcity<<" "<<nod<<endl;
    }
};
int main()
{
    Hospital x,y,z;
    x.accept();
    y.accept();
    z.accept();
    x.display();
    y.display();
    z.display();
}