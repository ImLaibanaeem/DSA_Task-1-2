#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int number;
  int array[5];
   int min,i,j;
   cout<<"Enter 5 numbers in array \n";
   for(i=0;i<5;i++)
	{ 
      cout<<"Enter Value At "<<i<<" index  ";
	  cin>>array[i]; 
	}
	//showing values
	cout<<"Values Are \n";
	  for(i=0;i<5;i++)
	    {
	  	   cout<<"Value at index  "<<i<< " is  "<<array[i]<<"\n";
	    }
	cout<<"Enter any Number from 1 to 9 : ";
	cin>>number;
	switch(number)
	{
		case 1:
			  int min=a[0];
     for(i=0;i<5;i++)
    {
     	if(min>a[i])
     	{
     		min=a[i];
     		
		 }
	}
		 cout<<"minimum value is"<< " "<<min;
		 break; 
		 case 2:
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
break;
case 3:
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
		break;
case 4:
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
		break;
      case 5:
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
	break;
	case 6:
		
	}
	    
  getch ();
}

