#include<iostream>
using namespace std;
inline int mul(int a, int b)
        {
            return a*b;
        }
        int main()
        {
            int p,q,r;
            cout<<"Enter 2 numbers\n";
            cin>>p>>q;
            r=mul(p,q);
            cout<<"multiplication="<<r<<endl;
            return 0;
        }
        
        