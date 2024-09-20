#include <iostream>
using namespace std;
main()
	{
		int n,w,h;
		cout <<endl<<"Please enter number of square meters you paint: ";
		cin >> n;
		cout <<endl<<"Please enter width of the single wall: ";
		cin >> w;
		cout <<endl<<"Please enter height of the single wall: ";
		cin >> h;
		int wall_painted = n/(w * h);
		cout<<endl<<"Number of walls you painted: "<<wall_painted<<endl;
	}