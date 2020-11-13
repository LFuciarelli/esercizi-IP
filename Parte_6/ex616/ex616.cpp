#include <iostream>
#include <string>

using namespace std;

long factorial(int);

// Il try permette di non metterele parentesi graffe del main perché comprende un blocco intero

int main()
	try {
		int number;
		cout << "Inserisci un numero naturale\n";
		cin >> number;
		long fact = factorial(number);
		cout << number << "! = " << fact << endl;
	} catch (string s){
		cerr << s << endl; 
	} catch (...){
		cerr << "unknown ecception" << endl;
	}


long factorial(int n){
	long f = n;

	if (n < 0) {
		string err = "questa funzione opera su numeri naturali";
		throw err; // esco direttamente della funzione senza ritornare un valore
	}

	if (n==0) return 1;
	for (int i=n-1; i>1; --i)
		f*=i;
	return f;
};
