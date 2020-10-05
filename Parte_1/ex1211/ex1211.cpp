#include <iostream>

using namespace std;

int main(){
	float r;
	float pigreco = 3.14;
	cout << "Inserisci il raggio del cerchio: ";
	cin >> r;
	float c = 2*pigreco*r;
	float a = pigreco*(r*r);
	cout << "Circonferenza = " << c << endl;
	cout << "Area = " << a << endl;
}
