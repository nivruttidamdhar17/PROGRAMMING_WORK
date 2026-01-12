// // POS
// #include<iostream>
// using namespace std;
// void add(int a, int b=7,int c=9)
// {
//     int d=a+b+c;
//     cout<<"addition="<<d<<endl;
// };
// int main()
// {
//     add(6);
//     add(8,4);
//     add(3,12,10);
//     return 0;
// }


// OOPS
#include<iostream>
using namespace std;
class addition
{
    private:
    int a,b,c;
    public:
    void calculate(int a, int b=7, int c=9)
    {
        float d;
        d=a+b+c;
        cout<<d;
    }
};
int main()
{
    addition x;
    x.calculate(23);
    return 0;
}