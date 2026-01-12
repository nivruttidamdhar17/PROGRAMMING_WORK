// volume of cone = 0.33*pi*r*r*h pass default value 6.78 to h variable

#include<iostream>
#define pi 3.14
using namespace std;
inline float volume(float r, float h=6.78)
{
    return 0.33*pi*r*r*h;
}
int main()
{
    float v;
    v=volume(8.99);
    cout<<"volume of cone="<<v<<endl;
    v=volume(8.99, 4.66);
    cout<<"Volume of cone= "<<v<<endl;
    return 0;
}