#include<iostream>
#include<string.h>
using namespace std;
class mystring
{
    private:
        char *str;
        int len;
    public:
        mystring()
        {
            len = 0;
            str=new char[len];
        }
        mystring(char c[30])
        {
            len=strlen(c);
            str=new char[len+1];
            strcpy(str,c);
        }
        void display()
        {
            cout<<str<<" "<<len<<endl;
        }
};
int main()
{
    mystring x("javascript");
    x.display();
    return 0;
}