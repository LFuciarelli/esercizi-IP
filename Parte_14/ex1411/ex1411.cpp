#include <iostream>
#include <string>

using namespace std;

int fact(const int& n){
	if (n < 0)
		throw "Valore negativo";
	else if (n == 0)
		return 1;
	return n*fact(n-1);
}

int main()
try {
	for(int i = 0; i < 6; ++i)
		cout << "Fattoriale di " << i << ": " << fact(i) << endl;
} catch (string s){
	cerr << s << endl;
}
