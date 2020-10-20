#include <iostream>
#include <limits>

using namespace std;

const unsigned int DIM = 10;

int main(){
	int A[DIM] = {5, 6, 1, 2, 3, 6, 12, 5, 2, 1};
	
	// Stampare l'array A

	cout << "Ecco il mio primo array: \n";
	for (unsigned int i=0; i < DIM; ++i){
		cout << A[i] << " ";
	}
	cout << endl;
	
	// Mostrare la somma di tutti gli elementi

	int sum = 0;
	for (unsigned int i=0; i < DIM; ++i){
		sum += A[i];
	}
	cout << "la somma degli elementi è: " << sum << endl;
	
	// Costruire la copia dell'array con il contenuto ribaltato

	int Arev[DIM];
	
	for (unsigned int i=0; i < DIM; ++i){
		Arev[DIM-1-i] = A[i];	// La stessa cosa di scrivere Arev[i] = A[DIM-1-i]
	}
	
	for (unsigned int i=0; i < DIM; ++i){
		cout << Arev[i] << " ";
	}
	cout << endl;

	// Calcoliamo il valore massimo dell'array e la sua posizione

	int max = INT8_MIN;
	int idx_max;
	
	for (unsigned int i=0; i < DIM; ++i){
		if (A[i] > max){
			max = A[i];
			idx_max = i;	
		}	
	}
	cout << "Valore massimo: " << max << "\nPosizione: " << idx_max << endl;
}
