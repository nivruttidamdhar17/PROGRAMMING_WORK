// copy form one file to another file but convert capital letters to small.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    ofstream fout;
    char c;
    fin.open("text.txt");
    fout.open("small.txt");
    while(!fin.eof())
    {
        fin.get(c);
        if(c>='A'&&c<='Z')
        {
            fout.put(c+32);
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
