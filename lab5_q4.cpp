//Library 
#include <iostream>
using namespace std;
//Main function
int main()
{
int a;
// Give the numbers
cout << " Give the numbers" << endl;
//store the value in a
cin >> a ;
// Condition
if ((a % 55 )== 0 ) {
cout << a << "is divisible by 11 and 5 both, and remainder is 0 " << endl;
}
else if ((a %  11 )== 0 ){
cout << a << " is divisible by 11 and remainder is 0 "  << endl;
}
else if ((a % 5 )== 0){
cout << a << " is divisible by 5 and remainder is 0 " << endl;
}
else {
cout << a << "  is not divisible " << endl;
}
return 0;
}
