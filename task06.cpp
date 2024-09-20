#include <iostream>
using namespace std;
main()
	{
		int size;
		cout<<endl<<"Please enter size of the bag:";
		cin>> size;
		int cost;
		cout<<endl<<"Please enter the cost of fertilizer bag:";
		cin>> cost;
		int area;
		cout<<endl<<"Please enter the area covered by the fertilizer bag:";
		cin>> area;
		int cost_pp = cost/size;
		int cost_psf = cost/area;
		cout<<endl<<"Cost of fertilizer per pound = "<<cost_pp <<endl;
		cout<<endl<<"Cost of fertilizer per square foot  = "<<cost_psf <<endl;
	}