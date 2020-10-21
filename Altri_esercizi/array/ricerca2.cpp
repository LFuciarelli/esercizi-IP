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
	
	// ALGORITMO: ricerca binaria - per sequenze ordinate
	// queste variabili sono indici	
	int first = 0;
	int last = DIM-1;
	int mid = (first+last)/2;
	bool trovato = false;
	
	while (first <= last && !trovato){
		if (S[mid] == elem)
			trovato = true;
		else
			if (S[mid] < elem)
				first = mid+1;	
			else
				last = mid-1;		
		mid = (first+last)/2;
	}

	// OUTPUT
	if (trovato)
		cout << "Ho trovato l'elemento " << elem << endl;
	else
		cout << "Non ho trovato l'elemento " << elem << endl;
}
