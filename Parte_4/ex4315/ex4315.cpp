#include <iostream>

using namespace std;

int main(){
	// Input
	const int N = 10;
	int source[N];
	int dest[N];

	for (int i = 0; i < N; ++i){
		int val;
		cout << "Valore n. " << i << "(int): ";
		cin >> val;
		source[i] = val;
	}
	
	// Primo elemento di dest (minore)
	int min = source[0];	
	for (int i = 0; i < N; ++i){
		if (source[i] < min){
			min = source[i];		
		}
	}
	dest[0] = min;

	// Ogni volta si aggiunge a dest il valore massimo di source. Questo valore dopo viene cancellato, per considerare il prossimo numero massimo
	// Infatti, dopo il secondo ciclo, il valore massima diventa minore di min, così non viene più considerato
	int max, i_max;
	for (int i = N-1; i > 0; --i){
		max = min;
		for (int j = 0; j < N; ++j){
			if (source[j] > max){
				max = source[j];
				i_max = j;			
			}
		}
		source[i_max] = min - 1;
		dest[i] = max;
	}
	
	// Output
	for (int i = 0; i < N; ++i)
		cout << dest[i] << " ";
	cout << endl;
}
