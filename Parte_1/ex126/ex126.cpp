#include <iostream>

using namespace std;

int main(){
	float a, b, c, d;
	cout << "Inserisci il valore di a: " << endl;
	cin >> a;
	cout << "Inserisci il valore di b: " << endl;
	cin >> b;
	cout << "Inserisci il valore di c: " << endl;
	cin >> c;
	cout << a << " " << b << " " << c << endl;
	d = a;
	a = b;
	b = c;
	c = d;
	cout << a << " " << b << " " << c;
}
