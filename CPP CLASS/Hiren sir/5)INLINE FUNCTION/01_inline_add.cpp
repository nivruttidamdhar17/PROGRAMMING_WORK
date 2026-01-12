
// #include<iostream>
// using namespace std;
// inline  int add(int a, int b)
//         {
//             return a+b;
//         }
//         int main()
//         {
//             int i,s;
//             for(i=0;i<10000000;i++)
//             {
//                 s=add(7,9);
//                 cout<<"addition="<<s<<endl;
//             }
//             return 0;
//         }


// OOPS
#include<iostream>
using namespace std;
class addition
{
    private:
    int a,b;
    public:
    void accept()
    {
        cout<<"Enter 2 numbers\n";
        cin>>a>>b;
    }
    inline int add()
    {
        return a+b;
    }
};
int main()
{
    int m;
    addition x;
    x.accept();
    m=x.add();
    cout<<"Addition ="<<m<<endl;
}