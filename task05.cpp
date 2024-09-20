#include <iostream>
using namespace std;
main()
	{
		string name;
		cout<<endl<<"Please enter your name:";
		cin>> name;
		float weight;
		cout<<endl<<"Please enter the target weight you want to lose:";
		cin>> weight;
		float days = 15*weight;
		cout<<endl<<name<<" needs "<<days<<" days to lose the targeted weight" <<endl;
	}