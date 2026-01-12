// copy form one file to another file but convert small letters to capital.

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    ofstream fout;
    char c;
    fin.open("text.txt");
    fout.open("capital.txt");
    while(!fin.eof())
    {
        fin.get(c);
        if(c>='a'&&c<='z')
        {
            fout.put(c-32);
        }
        else
        {
            fout.put(c);
        }
    }
    fin.close();
    fout.close();
    return 0;
}