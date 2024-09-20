#include <iostream>
using namespace std;
main()
	{
		int min;
		cout<<endl<<"Please enter time in minutes:";
		cin>> min;
		int frame;
		cout<<endl<<"Please enter frames per seconds:";
		cin>> frame;
		int total = (min*60)*frame;
		cout<<endl<<"The total number of frames is: "<< total<<endl;
	}