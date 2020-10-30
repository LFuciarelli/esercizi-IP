#include <iostream>

using namespace std;

int main(){
	// Input	
	const int N = 10;
	int a[N];

	for (int i = 0; i < N; ++i){
		int val;
		cout << "Valore n. " << i << "(int): ";
		cin >> val;
		a[i] = val;
	}
	
	// Inizializzazione di max e sec_max
	int max;
	int sec_max;

	if (a[0] > a[1]){
		max = a[0];
		sec_max = a[1];
	} else {
		max = a[1];
		sec_max = a[0];	
	}

	// Aggiornamento di max e sec_max
	for (int i = 2; i < N; ++i){
		if (a[i] > max){
			sec_max = max;
			max = a[i];
		}
	}
	
	// Output
	cout << "Il secondo valore più elevato è: " << sec_max << endl;
}
