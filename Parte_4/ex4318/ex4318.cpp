#include <iostream>

using namespace std;

int main(){
	const int N = 10;
	int ini[N];
	int aux[N];

	for (int i = 0; i < N; ++i){
		int val;
		cout << "Valore n. " << i << " (int): ";
		cin >> val;
		ini[i] = val;
	}
	
	// L'array aux (ausiliare) viene inizializzato a zero
	for (int i = 0; i < N; ++i)
		aux[i] = 0;

	// Last viene inizializzato con il primo numero. Rappresenta l'ultimo valore che è apparso per la prima volta nell'array ini
	int last = ini[0];
	aux[0] = last;
	int c = 0;						// Contatore per gli index dell'array aux, per evitare spazi vuoti (rappresentati con 0)
	for (int i = 1; i < N; ++i){
		if (ini[i] != last){		// Se si trova un nuovo valore, last viene aggiornato e questo valore viene aggiunto a aux, nella posizione c
			c++;
			aux[c] = ini[i];
			last = ini[i];
		}		
	}

	// Output
	for (int i = 0; i < N; ++i){
		if (a[i] != 0)
			cout << aux[i] << " ";
	}

	cout << endl;
}
