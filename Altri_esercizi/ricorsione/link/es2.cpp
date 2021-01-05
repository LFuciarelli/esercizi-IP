#include <iostream>

using namespace std;

int es2(int n){
	// somma delle cifre
	int somma = 0;
	int mod;
	while (n > 0){
		mod = n%10;
		somma += mod;
		n/=10;	
	}
	if (somma < 10)
		return somma;
	return es2(somma);
}

int main(){
	cout << es2(15) << endl;
	cout << es2(392) << endl;
}
