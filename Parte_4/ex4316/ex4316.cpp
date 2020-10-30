#include <iostream>

using namespace std;

int main(){
	const int N = 10;
	int a[N];

	for (int i = 0; i < N; i++){
		int val;
		cout << "Valore n. " << i << "(int): ";
		cin >> val;
		a[i] = val;
	}
	
	// Algoritmo selection sort
	int smallest;	
	for (int i = 0; i < N; ++i){
		smallest=i;
		for (int mini=i+1; mini < N; ++mini){
			if (a[smallest] > a[mini])
				smallest=mini;		
		}

		int temp = a[smallest];
		a[smallest] = a[i];
		a[i] = temp;
	}

	for (int i = 0; i < N; ++i)	
		cout << a[i] << " ";
	cout << endl;
}
