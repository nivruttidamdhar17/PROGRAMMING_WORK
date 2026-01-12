// copy from one and paste into another txt file.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    ofstream fout;
    char c;
    fin.open("text.txt");
    fout.open("test.txt");
    while(!fin.eof())
    {
        fin.get(c);
        fout.put(c);
    }
    fin.close();
    fout.close();
    return 0;
}