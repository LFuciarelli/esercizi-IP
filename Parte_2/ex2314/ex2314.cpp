#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float a, b, c;
	float delta;
	float x1, x2;
	cout << "Inserire il valore di a: ";
	cin >> a;
	cout << "Inserire il valore di b: ";
	cin >> b;
	cout << "Inserire il valore di c: ";
	cin >> c;
	cout << "Il risultato dell'equzione " << a << "x^2 " << b << "x " << c << " è:\n";
	delta = b*b - 4*a*c;
 	x1 = (-b + sqrt(delta))/2;
	x2 = (-b - sqrt(delta))/2;
	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;
}
