// Enter name if name have any other symbol or digits then throw error.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name[30];
    int i;
    cout<<"Enter name:"<<endl;
    cin>>name;
    for(i=0;i<strlen(name);i++)
    {
        if(!(name[i]>='a'&& name[i]<='z')||(name[i]>='A')&&(name[i]<='Z'))
        {
            throw name[i];
        }
    }
    cout<<"Valid name: "<<name<<endl;
    return 0;
}