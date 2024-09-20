#include <iostream>
using namespace std;
main()
	{
		int i_velocity;
		cout<<endl<<"Please enter initial veocity:";
		cin>> i_velocity;
		int acc;
		cout<<endl<<"Please enter acceleration:";
		cin>> acc;
		int time;
		cout<<endl<<"Please enter time:";
		cin>> time;
		int f_velocity = (acc*time)+i_velocity;
		cout<<endl<<"The final velocity of car is: "<< f_velocity<<endl;
	}