#include <iostream>

using namespace std;

int main()
{
	float f = 3./7 + 2./7. + 2./7.;
	cout << boolalpha << (f == 1.0) << endl;
	
	double d = 3./7 + 2./7. + 2./7.;
	cout << boolalpha << (d == 1.0) << endl;
}
