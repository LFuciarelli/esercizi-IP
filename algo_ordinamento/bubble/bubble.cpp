#include <iostream>
#include <vector>

using namespace std;

const int DIM = 10;

void bubble(int a[]){
	for (int i = 0; i < DIM; ++i){
		for (int j = 0; j < DIM-1-i; ++j){				// bubble sort ordina dalla fine dell'array all'inizio
			if (a[j] > a[j+1]){
				// Swap
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	for (int i = 0; i < DIM; ++i)
		cout << a[i] << " ";
	cout << endl;
}

int main(){
	int b[DIM];
	for (int i = 0; i < DIM; ++i){
		cout << "Inserisci il " << i+1 << "° elemento: ";
		cin >> b[i];
	}
	
	bubble(b);
}

