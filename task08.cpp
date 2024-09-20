#include <iostream>
using namespace std;
main()
	{
		float rupees = 1.94;
		float price_v;
		cout<<endl<<"Please enter the vegetables price in coins per kg: ";
		cin>> price_v;
		float price_f;
		cout<<endl<<"Please enter the fruits price in coins per kg: ";
		cin>> price_f;
		float total_v;
		cout<<endl<<"Please enter the total kilogram of vegetables: ";
		cin>> total_v;
		float total_f;
		cout<<endl<<"Please enter the total kilogram of fruits: ";
		cin>> total_f;
		float rupees_v = price_v/1.94;
		float rupees_f = price_f/1.94;
		float earning = (total_v*rupees_v)+(total_f*rupees_f);
		cout<<endl<<"Total earnig in rupees  = "<<earning <<endl;
	}