#include <iostream>

using namespace std;

// Descrizione dell'algoritmo sul sito brilliant.org/wiki/trailing-number-of-zeros/
int tot_zeri(int n){
	int zeri = 0;
	for (int mult = 5; mult <= n; mult *= 5){
		zeri += n/mult;
	}
	return zeri;
}

int main(){
	cout << tot_zeri(5) << endl;
	cout << tot_zeri(11) << endl;
}
