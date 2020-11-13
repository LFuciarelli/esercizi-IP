#include <iostream>

using namespace std;

// Descrizione dell'algoritmo sul sito brilliant.org/wiki/trailing-number-of-zeros/
// Versione ottimizzata: Parte 6, ex6320

int main(){
	int num;
	cout << "Inserisci un numero intero positivo: ";
	cin >> num;
	if (num <= 0){
		cout << "Avevo detto un numero positivo!";
		return 1;	
	}

	int c = 0;
	for (int i = 5; i <= num; i += 5){
		int primo = 2;
		int n = i;
		while (n > 1){
			if (n % primo == 0){
				if (primo == 5)
					c += 1;
				n /= primo;
			} else {
				if (primo == 2)
					primo = 3;
				else
					primo += 2;
			}
		}
	}
	cout << "Il numero di zeri alla fine del fatoriale di " << num << " è " << c << endl;
}
