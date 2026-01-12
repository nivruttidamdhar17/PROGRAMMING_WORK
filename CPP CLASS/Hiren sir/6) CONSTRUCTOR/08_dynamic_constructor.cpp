// enter n marks calculate total and percentage using dynamic constructor.
#include<iostream>
using namespace std;
class result
{
    private:
    int n;
    int *m;
    int total;
    float per;
    public:
    result(int p)
    {
        n=p;
        m=new int[n];
        int i;
        cout<<"Enter marks\n";
        for(i=0;i<n;i++)
        {
            cin>>m[i];
        }
    }
    void calculate()
    {
        int i;
        total=0;
        for(i=0;i<n;i++)
        {
            total=total+m[i];
        }
        per=(float)total/(float)n;
    }
    void display()
    {
        cout<<"Display marks\n";
        int i;
        for(i=0;i<n;i++)
        {
            cout<<m[i]<<" ";
        }
        cout<<"\ntotal= "<<total<<endl;
        cout<<"Percentage= "<<per<<endl;
    }
};
int main()
{
    result x(7);
    x.calculate();
    x.display();
    return 0;
}