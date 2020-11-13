#include <iostream>
#include <string>

using namespace std;

int main(){
	string s1 = "Hello";
	string s2 = "World";
	cout << "Debug: Indirizzo di s1 == " << &s1 << " Indirizzo di s2 == " << &s2 << endl;
	cout << "Valore di s1 == " << s1 << " Valore di s2 == " << s2 << endl;
	string *p = &s1;
	cout << "Debug: Valore di p == " << p << " Valore area di memoria puntata da p " << *p << endl;
	*p = "Ciao";
	p = &s2;
	cout << "Debug: Valore di p == " << p << " Valore area di memoria puntata da p " << *p << endl;
	*p = "Mondo";
	cout << s1 << " " << s2 << endl;
}
