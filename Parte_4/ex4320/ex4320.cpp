#include <iostream>

using namespace std;

const int N = 10;
int main(){
	int tavola[N*(N+1)/2]; // Formula di Gauss (somma di 1+...+10)

	// Calcola la tavola
	int index = 0;
	for (int i = 0; i < N; ++i){
		for (int j = i; j < N; ++j){
			tavola[index] = (i+1)*(j+1);
			index++;
		}
	}
	
	// Input
	int a, b, prodotto;
	cout << "Inserisci due valori tra 1 e " << N << " di cui vuoi conoscere il prodotto: " << endl;
	
	// Swap per ordinare i valori di a e b
	if (a > b){
		int temp = a;
		a = b;
		b = temp;
	}

	// La formula funziona così ((p1+p2) - p1): 1x1 = 0 - 0; 2x2 = 11 - 1; 3x3 = 22 - 3; 4x4 = 33 - 6...
	cin >> a >> b;
	prodotto = tavola[(N*(a-1)) + (b-1) - (a*(a-1)/2)]; // parte1 + parte2 - parte3
	cout << "Il loro prodotto è: " << prodotto << endl;
}
