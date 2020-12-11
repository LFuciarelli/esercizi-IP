#include <iostream>
#include <string>

using namespace std;

int MCD(const int& m, const int& n){
	if (m == n)
		return m;
	if (m > n)
		return MCD(m-n, n);
	return MCD(m, n-m);			// if (n > m)
}

int main()
try {
	int n1, n2;
	cout << "Inserisci il primo numero intero: ";
	cin >> n1;
	cout << "Inserisci il secondo numero intero: ";
	cin >> n2;
	cout << "MCD(" << n1 << "," << n2 << ") = " << MCD(n1, n2) << endl;
} catch (string s){
	cerr << s << endl;
}
