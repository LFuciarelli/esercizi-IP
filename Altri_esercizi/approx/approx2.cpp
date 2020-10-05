#include <iostream>
#include <cmath>


using namespace std;

const float TOLL=0.0000001;

int main()
{
	float f = 3./7 + 2./7. + 2./7.;
	cout << boolalpha << (fabs(f-1.0) < TOLL) << endl;
	
	double d = 3./7 + 2./7. + 2./7.;
	cout << boolalpha << (fabs(d-1.0) < TOLL) << endl;
}
