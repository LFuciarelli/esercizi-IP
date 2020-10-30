#include <iostream>

using namespace std;

int main(){
	// Input	
	const int N = 10;
	int a[N];
	int cont[N];
	
	for (int i = 0; i < N; ++i){
		cout << "Inserisci un numero intero: ";
		cin >> a[i];
	}
	
	// Prima l'algoritmo conta i zeri
	int c0 = 0;
	for (int i = 0; i < N; ++i){
		if (a[i] == 0)
			c0++;	
	}

	if (c0 > 0)
		cout << "0 appare " << c0 << " volte" << endl;
	
	// Conta gli altri elementi. Nell'array, rimane solo una occorrenza ogni elemento: gli altri vengono azzerati.
	int c;
	for (int i = 0; i < N; ++i){
		if (a[i] != 0){		
			c = 0;
			for (int j = 0; j < N; ++j){
				if (a[i] == a[j]){
					c++;
					if (j != i)
						a[j] = 0;
				}
			}
			cont[i] = c;
		}
	}
	
	//Output
	for (int i = 0; i < N; ++i){
		if (a[i] != 0){
			cout << a[i] << " appare " << cont[i] << " volte" << endl;
		}
	}
}
