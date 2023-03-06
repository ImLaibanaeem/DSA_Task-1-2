#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   int i;
	int a[5];
	 cout<<"  Enter any 5 integers in array<< \n";
	for(i=0;i<5;i++)
	{
		cout<<"  Enter value at index  "<<i<<"   ";
		cin>>a[i];
	}
	cout<<"values are"<<endl;
	 
    for(i=0;i<5;i++)
	{
		cout<<a[i]<<endl;
	}
		int max=a[0];

//	cout<<"enter a value"<<endl;
	for(int i=1;i<5;i++)
	{
    	if(max<a[i])
    	{
    		max=a[i];
		}
	}
	cout<<"maximum value is  "<<max;
		
	
}
