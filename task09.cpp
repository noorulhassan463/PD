#include <iostream>
using namespace std;
main()
	{
		int num;
		cout <<endl<<"Please enter a four digit number";
		cin >> num;
		int x = num%10;
		int a = num/10;
		int y = a%10;
		int b = a/10;
		int z = b%10;
		int c = b/10;
		int sum = x+y+z+c;
		cout <<"Sum of indvidual digit "<<sum;
		
	}