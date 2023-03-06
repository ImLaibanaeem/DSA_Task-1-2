#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,required; 
	int a[5];
	 cout<<"  Enter any 5 integers in array \n";
	for(i=0;i<5;i++)
	{
		cout<<"  Enter value at index  "<<i<<"   ";
		cin>>a[i];
	}
	cout<<"Values are"<<endl;
	 
    	for(i=0;i<5;i++)
		{
			cout<<a[i]<<endl;
		}
	cout<<"Enter a number you want to find \n";
	cin>>required;
	bool flag;
		for(i=0;i<5; i++)
		{ 
			 if(required==a[i])
	 		{
	 			cout<<"Number is present at index "<<i;
	 			flag++;
			 }
	 	}
	 	if(flag==0)
	 	{
	 		cout<<" Number you entered is not present";	
		}
	 	getch();
}
