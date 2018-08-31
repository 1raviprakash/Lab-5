//library
#include<iostream>
using namespace std;
//main function
int main()
{
	int a;
	//Give year
	cout << "year" << endl;
	cin >> a;
	if ((a % 4 )== 0 ){
	cout << a << " is a leap year" << endl;
	}
	else { 
	cout << a << " is not a leap year" << endl; 
	}
return 0;
}


