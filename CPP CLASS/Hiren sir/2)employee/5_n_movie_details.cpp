// enter n movie details and display them movieno, moviename, releasedyear. display only movie which released after 2015 


#include<iostream>
using namespace std;
class movie
{
    private:
    int movieno;
    char moviename[60];
    int releasedyear;
    public:
    void accept()
    {
        cout<<"Enter movie details\n";
        cin>>movieno>>moviename>>releasedyear;
    }
    void display()
    {
        cout<<movieno<<" "<<moviename<<" "<<releasedyear<<endl;
    }
    void displaymovieraf2015()
    {
        if(releasedyear>2015)
        {
            display();
        }
    }
};
int main()
{
    movie x[100];
    int i,n;
    cout<<"Enter n\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        x[i].accept();
    }
    cout<<"Display movie details\n";
    for(i=0;i<n;i++)
    {
        x[i].display();
    }
    cout<<"Display only movies which is released after 2015\n";
    for(i=0;i<n;i++)
    {
        x[i].displaymovieraf2015();
    }
}