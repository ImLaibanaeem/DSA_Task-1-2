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
	int flag;
	for(i=0;i<5;i++)
	{
	//	cout<<array[i];
		//{
			if(array[i]%2!=0)
			{
				cout<<array[i]<<" is an odd number \n";
				flag++;
			}
		//}
	}
	if(flag==0)
	{
		cout<<"no numbr is odd in array \n";
	}
	getch();

}
