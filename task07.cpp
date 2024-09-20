#include <iostream>
using namespace std;
main()
	{
		string name;
		cout<<endl<<"Please enter the movie name:";
		cin>> name;
		int adult;
		cout<<endl<<"Please enter the adult ticket price:";
		cin>> adult;
		int child;
		cout<<endl<<"Please enter the child ticket price:";
		cin>> child;
		int adult_sold;
		cout<<endl<<"Please enter the number of adult tickets sold:";
		cin>> adult_sold;
		int child_sold;
		cout<<endl<<"Please enter the number of child tickets sold:";
		cin>> child_sold;
		float charity;
		cout<<endl<<"Please enter the percentage donated to charity:";
		cin>> charity;
		cout<<endl;
		float total = (adult*adult_sold)+(child*child_sold);
		float donation = total*(charity/100);
		float remaining = total-donation;
		cout <<endl<<"Movie: "<< name<<endl;
		cout<<endl<<"Total amount generated = "<<total <<endl;
		cout<<endl<<"Donation to charity ("<<charity<<"%):"<<donation<<endl;
		cout<<endl<<"Remaining amount = "<<remaining <<endl;
	}