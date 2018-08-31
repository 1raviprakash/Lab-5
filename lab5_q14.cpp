//library
#include<iostream>
using namespace std;
//main function
int main()
{
	int a,b,c;
	//Give all three angles
	cout << "all angles are" << endl;
	cin >> a,b,c;
	// condition
	if (a|| b || c == 180) {
	cout << "it is not a triangle " << endl;
	}
	else if ((a+b+c)== 180) { 
	cout <<"it is a tringle" << endl; 
	}
	else {
	cout << " it is not a triangle" << endl;
	}
return 0;
}

