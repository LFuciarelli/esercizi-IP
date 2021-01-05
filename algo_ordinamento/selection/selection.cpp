#include <iostream>
#include <vector>

using namespace std;

const int DIM = 10;

void selection(int a[]){
	int smallest;
	for (int i = 0; i < DIM; ++i){
		smallest = i;									// indice elemento più piccolo
		for (int cur = i+1; cur < DIM; ++cur){			// cur - indice elemento attuale
			if (a[cur] < a[smallest])
				smallest = cur;
		}
		
		// Swap
		int temp = a[smallest];
		a[smallest] = a[i];
		a[i] = temp;
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
	
	selection(b);
}

