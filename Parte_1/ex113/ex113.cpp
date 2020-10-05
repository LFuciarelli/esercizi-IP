#include <iostream>

using namespace std;

int main(){
	cout << "Inserire il valore di a: ";
	int a;
	cin >> a;
	cout << "Inserire il valore di b: ";
	int b;
	cin >> b;
	cout << "\na vale " << a;
	cout << "\nb vale " << b;
	int c = a;
	a = b;
	b = c;
	cout << "\na vale " << a;
	cout << "\nb vale " << b << endl;
}
