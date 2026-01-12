#include<iostream>
using namespace std;
class demo
{
    public:
    static int a;
            int b;
            void one()
            {
                cout<<"php\n";
            }
    static void two()
            {
                cout<<"java\n";
            }
};
int demo::a=0;
int main()
{
    demo::a=11;
    demo x;
    x.b=21;
    x.one();
    demo::two();
}