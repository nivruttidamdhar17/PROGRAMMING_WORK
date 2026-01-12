// Calculate simple intrest calculation, assign 5.66 default value to rate of intrest.
 
#include<iostream>
using namespace std;
class simple_intrest
{
    private:
    float p,r;
    int n;
    public:
    void accept()
    {
        cout<<"Enter p,n,r\n";
        cin>>p>>n>>r;
    }
    inline float calculate()
    {
        return (p*n*r)/100;
    }
};
int main()
{
    float v;
    simple_intrest x;
    x.accept();
    v=x.calculate;
    cout<<"simple intrest calculation="<<v<<endl;
    return 0;
}