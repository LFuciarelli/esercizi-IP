// Ricerca di un elemento all'interno di una sequenza

#include <iostream>

using namespace std;

const unsigned int DIM=10;

int main(){

	// INPUT
	int S[DIM];
	int elem;

	cout << "Inserisci " << DIM << " elementi interi\n";
	for (unsigned int i=0; i<DIM; ++i)
		cin >> S[i];
	cout << "Inserisci un elemento da cercare\n";
	cin >> elem;
	
	// ALGORITMO: ricerca sequenziale - per qualunque sequenza
	bool trovato=false;
	unsigned int i = 0;
	int pos = -1;

	// for (unsigned int i=0; i<DIM; ++i) con un break
	while (!trovato && i<DIM){
		if (S[i] == elem){
			trovato = true;
			pos=1;
		}
		++i;
	}

	// OUTPUT
	if (trovato)
		cout << "Ho trovato l'elemento " << elem << endl;
	else
		cout << "Non ho trovato l'elemento " << elem << endl;
}

