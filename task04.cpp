#include <iostream>
using namespace std;
main()
	{
		float i;
		cout<<endl<<"Please enter imposter count:";
		cin>> i;
		float p;
		cout<<endl<<"Please enter player count:";
		cin>> p;
		float chance = 100*(i/p);
		cout<<endl<<"The chance of being imposter is: "<< chance<<"%" <<endl;
	}