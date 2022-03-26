
#include <iostream>
using namespace std;
int main()
{
	//Variable
	int press, vehicle=0, amount=0, bike=0, riksha=0, car=0, del;
	
	//Loop
	while(true)
	{	
	//Menu
	cout<<"  PRESS:"<<endl;
	cout<<"  ---------------------"<<endl;
	cout<<" | 1 for Bike          |"<<endl;
	cout<<" | 2 for Riksha        |"<<endl;
	cout<<" | 3 for Car           |"<<endl;
	cout<<" | 4 for Total Record  |"<<endl;
	cout<<" | 5 for Delete Record |"<<endl;
	cout<<"  ---------------------"<<endl;
	
	//user input
	cout<<"\t   ";
	cin>>press;
	cout<<endl;
	
	//Conditions output
	if(press==1)
	{vehicle=vehicle+1;
	amount=amount+20;
	bike++;
	}
	
	else if(press==2)
	{vehicle=vehicle+1;
	amount=amount+30;
	riksha++;
	}
	
	else if(press==3)
	{vehicle=vehicle+1;
	amount=amount+50;
	car++;
	}
					
	else if(press==4)
	{
		cout<<"\t\t\t\t\t TOTAL RECORD"<<endl;
		cout<<"\t\t\t\t ==========================="<<endl;
		cout<<"\t\t\t\t Total Bike:\t\t"<<bike<<endl;
		cout<<"\t\t\t\t Total Riksha:\t\t"<<riksha<<endl;
		cout<<"\t\t\t\t Total Car:\t\t"<<car<<endl;
		cout<<"\t\t\t\t ==========================="<<endl;
		cout<<"\t\t\t\t Total Vehicle:\t\t"<<vehicle<<endl;
		cout<<"\t\t\t\t Total Amount:\t\t"<<amount<<endl<<endl;
		}
		
		else if(press==5)
	{
		bike=0;
		riksha=0;
		car=0;
		vehicle=0;
		amount=0;
		cout<<"\t\t\t\t\t DELETE RECORD"<<endl;
		cout<<"\t\t\t\t ==========================="<<endl;
		cout<<"\t\t\t\t Total Bike:\t\t"<<bike<<endl;
		cout<<"\t\t\t\t Total Riksha:\t\t"<<riksha<<endl;
		cout<<"\t\t\t\t Total Car:\t\t"<<car<<endl;
		cout<<"\t\t\t\t ==========================="<<endl;
		cout<<"\t\t\t\t Total Vehicle:\t\t"<<vehicle<<endl;
		cout<<"\t\t\t\t Total Amount:\t\t"<<amount<<endl<<endl;
		}
		
		else{
		cout<<"\t\t\t\t**************"<<endl;
		cout<<"\t\t\t\t Ivalid Number"<<endl;
		cout<<"\t\t\t\t Pleas try again"<<endl;
		cout<<"\t\t\t\t Thanks!"<<endl;
		cout<<"\t\t\t\t**************"<<endl<<endl;
		}
	
	
}
return 0;
}
