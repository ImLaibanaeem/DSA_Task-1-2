#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   int i;
	int array[5];
	 cout<<"  Enter any 5 integers in array\n";
		for(i=0;i<5;i++)
		{
			cout<<"  Enter value at index  "<<i<<"   ";
			cin>>array[i];
		}
	cout<<"values are"<<endl;
	 	for(i=0;i<5;i++)
		{
			cout<<array[i]<<endl;
		}
	cout<<" Reverse values are \n";
		for(i=4;i>=0;i--)
		{
			cout<<array[i]<<endl;
			//reverse=reverse+a[i];
		}
}
