#include <iostream>

using namespace std;

int main()
{
	int choice;
	string day, month, year;
	cout<<"1.Year\n2.Month\n3.Date\n"<<endl;
	cout<<"Enter your choice: "<<endl;
	cin>>choice;
	switch(choice)
	{
	case 1: 
	{
	cout<<"2021\n"<<endl;
	break;
	}	
	case 2:
        {
        cout<<"October\n"<<endl;
        break;
        }		
 	case 3:
        {
        cout<<"13\n";
        break;
        }
		
	default:
		cout<<"choose valid options"<<endl;
	}


}
