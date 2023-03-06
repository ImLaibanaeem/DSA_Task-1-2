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
	int sum=0;
	for(i=0;i<5;i++)
	{
		//cout<<a[i];
		sum=sum+array[i];
	}
	cout<<" Sum of numbers in array are  "<<sum;
	getch();
}
