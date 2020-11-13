#include <iostream>

using namespace std;

// INTERFACCIE-PROTOPOTI DELLE FUNZIONI
bool is_even(int);
int my_square(int);
int count_digits(int);

int main(){	// FUNZIONE CHIAMANTE
	int m;
	cout << "Inseriscci un elemento di tipo int\n";
	cin >> m;

	// ESEMPI DI CHIAMATE DI FUNZIONE
	cout << boolalpha << is_even(m) << endl;
	cout << my_square(m) << endl;
	cout << boolalpha << is_even(my_square(m)) << endl;
	cout << count_digits(m) << endl;
}

// DICHIARAZIONI

// funzione booleana che verifica se un intero è pari
bool is_even(int n){
	return ((n%2) == 0);
}

int my_square(int n){
	return (n*n);
}

// conta il numero di cifre di un intero. Es 101 = 3.
// per il momento consideriamo interi senza segno

int count_digits(int n){
	int cont = 0;
	n = abs(n);
	if (n==0) return 1;	
	while (n > 0){
		cont++;
		n /= 10;
	}
	return (cont);	
}


