// create a class converter have a pure virtual function convert creat a derived class kgTog from converter class.


#include<iostream>
using namespace std;

class Convertor
{
    public:
        virtual void convert() =0;
};
class kgtog : public Convertor
{
    private:
        int kg;
    public:
        void accept()
        {
            cout<<"enter kg\n";
            cin>>kg;
        }
    void convert()
    {
        int g = kg *1000;
        cout<<"kg to g ="<<g<<endl;
    }
};
int main()
{
    kgtog y;
    y.accept();
    y.convert();

    return 0;
}