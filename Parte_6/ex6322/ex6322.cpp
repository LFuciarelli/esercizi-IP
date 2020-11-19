#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Versione generale

// Numero di cifre in un numero
int n_cifre(int n){
	int cifre = 0;
	while (n > 0){
		n /= 10;
		cifre++;
	}
	return cifre;
}

// Verifica se n contiene k
bool contiene_k(int n, int k){
	// Prima verifica il numero attraverso le divisioni
	// Es. 382 -> 38 -> 3 (sinistra verso destra)
	int first = n;
	while (first > 0){
		if (first == k)
			return true;
		first /= 10;
	}
	
	// Dopo verifica il numero attraverso i moduli
	// Es. 382 -> 82 -> 2 (destra verso sinitra)
	int sec = n;
	int pot = pow(10, n_cifre(sec)-1);
	// (il programma esegue per l'ultima volta quando pot == 1 perché ogni numero è divisibile per 1, quindi sec è uguale a sec%pot) 
	while (pot > 0){
		sec = sec%pot;
		if (sec == k)
			return true;
		pot /= 10;
	}
	return false;
}

int main(){
	int num;
	cout << "Inserisci un numero tra 0 e 400: ";
	cin >> num;
	if (num < 0 || num > 400){
		cout << "Valore invalido" << endl;
		return -1;
	}
	for (int i = 400; i >= 0; --i){
		if (contiene_k(i, num)){
			cout << i << endl;
			break;
		}
	}
}
