//Library 
#include <iostream>
using namespace std;
//Main function
int main()
{
float A,B,C;
// Give the numbers
cout << " Give the numbers" << endl;
//store the value in A ,B and C.
cin >> A >> B >> C;
// Condition
if (A<B){
   //to do
      if (C<B)
     cout << "B is greate and it is : "<< B << endl;
     else  cout << "C is greate and it is : "<< C << endl;
    }

if (B<A){
	//to do
	if (C<A)
	cout << "A is greate and it is : "<< A << endl;
	
	else  cout << "C is greate and it is : "<< C << endl;
}

return 0;
}
