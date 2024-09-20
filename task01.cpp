#include <iostream>
using namespace std;
main()
	{
		int sides;
		cout<<endl<<"Please enter the sides of polygon:";
		cin>> sides;
		int sum = (sides-2)*180;
		cout<<endl<<"The sum of the angles of polygon in degrees is: "<< sum<<endl;
	}