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
	int counter=0;
		for(i=0;i<5; i++)
		{ 
			 if(required==a[i])
	 		{
	 			cout<<"Number is present at index "<<i<<"\n";
	 			counter++;
			 }
	 	}
	 	if(counter==0)
	 	{
	 		cout<<" Number you entered is not present";	
		}
		else
		{
			cout<<" Number is present "<<counter<<" times\n";
		}		
		
	 	getch();
}
