#include <iostream>

using namespace std;

int main(){
	// Input
	const int N = 10;
	float a[N];

	for (int i = 0; i < N; ++i){
		int val;
		cout << "Valore n. " << i << " (float): ";
		cin >> val;
		a[i] = val;
	}

	// Si percorre l'array a metà, scambiando il primo con l'ultimo, il secondo con il penultimo e così via
	int temp;
	for (int i = 0; i < N/2; ++i){
		temp = a[i];
		a[i] = a[N-1-i];
		a[N-1-i] = temp;
	}
	
	// Output
	for (int i = 0; i < N; ++i){
		cout << a[i] << " ";
	}
	cout << endl;
}
