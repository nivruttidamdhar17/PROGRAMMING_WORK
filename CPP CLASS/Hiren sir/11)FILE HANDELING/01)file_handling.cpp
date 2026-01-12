// Print text from a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    char c;
    fin.open("text.txt");
    while(!fin.eof())
    {
        fin.get(c);
        cout<<c;
    }
    fin.close();
    return 0;
}