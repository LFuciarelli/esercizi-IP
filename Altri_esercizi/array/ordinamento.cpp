// Ordinamento in place (ossia senza copia)

#include <iostream>

using namespace std;

const int DIM=10;

int main(){

	// INPUT - sequenza arbitraria
	int S[DIM];
	int elem;

	cout << "Inserisci " << DIM << " elementi interi\n";
	for (unsigned int i=0; i<DIM; ++i)
		cin >> S[i];

	// ALGORITMO - SELECTION SORT
	int smallest;	
	for (unsigned int i=0; i<DIM; ++i){
		smallest=i;
		for (unsigned int mini=i+1; mini<DIM; ++mini){
			if (S[smallest]>S[mini])
				smallest=mini;		
		}

 		// swap
		unsigned int temp = S[smallest];
		S[smallest] = S[i];
		S[i] = temp;
	}
	// OUTPUT - sequenza ordinata in modo crescente
	for (unsigned int i=0; i<DIM; ++i)	
		cout << S[i] << " ";
	cout << endl;
}
