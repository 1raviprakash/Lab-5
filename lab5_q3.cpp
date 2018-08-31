//Library 
#include <iostream>
using namespace std;
//Main function
int main()
{
float a ;
// Give the numbers
cout << " Give the numbers" << endl;
//store the value in a
cin >> a ;
// Condition
if (a > 0 ){
cout << a << " is positive" << endl;
}
else if (a < 0 ){
cout << a << " is negative" << endl;
}
else {
cout << "a is equal to " << a << endl;
}
return 0;
}
