#include <iostream>

using namespace std;

int main(){
	char a, b;
	cout << "Inserisci a e b: " << endl;
	cin >> a >> b;
	cout << "a = " << a << "\nb = "<< b;
	char temp = a;
	a = b;
	b = temp;
	cout << "\na = " << a << "\nb = " << b;
}
