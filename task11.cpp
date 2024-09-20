#include <iostream>
using namespace std;
main()
	{
		int age,moves;
		cout <<endl<<"Please enter your age: ";
		cin >> age;
		cout <<endl<<"Please enter the number of time you move from one house: ";
		cin >> moves;
		int average = age/(moves+1);
		cout<<endl<<"Average number to live in asingle house: "<<average<<endl;
	}