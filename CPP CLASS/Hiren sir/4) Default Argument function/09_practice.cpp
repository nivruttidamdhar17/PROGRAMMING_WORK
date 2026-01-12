// write a program in c++ to sort the number in an array.
// OOP COLLAGE PROGRAM

#include<iostream>
using namespace std;

void read(int [],int &);
void display(int [],int );
void swap(int &,int &n);
void sort(int [],int &n);

int main() 
{
	int n,arr[100];
	read(arr,n);
	cout <<endl<<"Given array is : "<<endl ;
	display(arr, n);
	sort(arr, n);
	cout<<endl<<"Sorted array is : "<<endl ;
	display(arr, n);
	return 0;
}

void read(int arr[],int &n) 
{
	cout<<"Enter the number of elements in the array : ";
	cin>>n;
	cout<<"Enter the data : ";
	for(int i=0;i<n;i++)
    {
		cin>>arr[i];
	}
}

void display(int a[],int n) {
	for (int i=0;i<n;i++)
    {
		cout<<a[i]<<"\t" ;
	}
	cout<<endl<<"-------------------------";
}

void swap(int &i,int &j) 
{
	int temp=i;
	i=j;
	j=temp;
}

void sort(int a[],int &n)
{
	for(int i=0;i<n-1;i++)
    {
		for(int j=0;j<n-i-1;j++)
        {
			if(a[j]>a[j+1])
            {
				swap(a[j],a[j+1]);
			}
		}
	}
}