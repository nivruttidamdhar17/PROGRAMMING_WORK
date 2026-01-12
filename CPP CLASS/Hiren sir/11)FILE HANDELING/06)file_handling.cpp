// Divide characters into different files according to their datatype.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    ofstream fc, fs, fd, fo;
    char c;
    fc.open("capital1.txt");
    fs.open("small1.txt");
    fd.open("digit.txt");
    fo.open("othersym.txt");
    while(!fin.eof())
    {
        fin.get(c);
        
        if(c>='A' && c<='Z');
        {
            fc.put(c);
        }
        else if(c>='a' && c<='z');
        {
            fs.put(c);
        }
        else if(c<='0' && c<='9')
        {
            fd.put(c);
        }
        else
        {
            fo.put(c);
        }
    }
    fin.close();
    fc.close();
    fs.close();
    fd.close();
    fo.close();
    return 0;
}